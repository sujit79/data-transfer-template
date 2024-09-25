/* License As per License.txt in the Root Folder*/

package MICROINSTALLDB::DBI;
use base 'Class::DBI';
MICROINSTALL::DBI->connection('dbi:mysql:dbname', 'username', 'password');

package MICROINSTALL::DATABASE;
use base 'MICROINSTALL::DBI';
MICROINSTALL::DATABASE->table('artist');
MICROINSTALL::DATABASE->columns(All => id name);
MICROINSTALL::DATABASE->has_many(cds => 'MICROINSTALL::TEXT');

package MICROINSTALL::TEXT;
use base 'MICROINSTALL::DATABASE';
Music::TEXT->table('Text');
Music::TEXT->columns(All => qw/textid Text);

1



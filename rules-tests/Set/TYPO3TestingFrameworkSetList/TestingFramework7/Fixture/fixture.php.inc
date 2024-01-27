<?php
declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Tests\Set\TYPO3TestingFrameworkSetList\TestingFramework7\Fixture;

use TYPO3\TestingFramework\Core\Functional\FunctionalTestCase;
use TYPO3\TestingFramework\Core\Unit\UnitTestCase;

final class MyUnitTestCase extends UnitTestCase
{
    protected $resetSingletonInstances = false;
}

final class MyFunctionalTestCase extends FunctionalTestCase
{
    protected $coreExtensionsToLoad = [];
    protected $testExtensionsToLoad = [];
    protected $pathsToLinkInTestInstance = [];
    protected $configurationToUseInTestInstance = [];

    public function test(): void
    {
        $this->executeFrontendRequest();
    }
}

?>
-----
<?php
declare(strict_types=1);

namespace Ssch\Typo3RectorTestingFramework\Tests\Set\TYPO3TestingFrameworkSetList\TestingFramework7\Fixture;

use TYPO3\TestingFramework\Core\Functional\FunctionalTestCase;
use TYPO3\TestingFramework\Core\Unit\UnitTestCase;

final class MyUnitTestCase extends UnitTestCase
{
    protected bool $resetSingletonInstances = false;
}

final class MyFunctionalTestCase extends FunctionalTestCase
{
    protected array $coreExtensionsToLoad = [];
    protected array $testExtensionsToLoad = [];
    protected array $pathsToLinkInTestInstance = [];
    protected array $configurationToUseInTestInstance = [];

    public function test(): void
    {
        $this->executeFrontendSubRequest();
    }
}

?>

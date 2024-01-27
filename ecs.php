<?php

declare(strict_types=1);

use Symplify\EasyCodingStandard\Config\ECSConfig;

return ECSConfig::configure()
    ->withPaths(
        [__DIR__ . '/src', __DIR__ . '/rules', __DIR__ . '/rules-tests', __DIR__ . '/tests', __DIR__ . '/config']
    )
    ->withRootFiles()
    ->withSets([
        \Symplify\EasyCodingStandard\ValueObject\Set\SetList::PSR_12,
    ])
    ->withSkip(['*/Source/*', '*/Fixture/*', '*/Expected/*']);
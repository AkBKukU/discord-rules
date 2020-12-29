# Tech Tangents Discord Server

These YAML files set the rules and channel definitions for the Tech Tangents Discord Server.

These files will be read by [the Discord bot](https://github.com/AkBKukU/discord-bot) to update the rules list & channel topics
automatically.

We'll also generate the meta file (server.yaml) into an embed and post it into #rules-info whenever the repo is updated.

## rules.yaml

This file has the current list of rules. This is set to be modified (https://github.com/AkBKukU/discord-rules/issues/7) soon.

The schema for this file may also change to allow us to write brief and long versions of the rule.

## server.yaml

This file contains read-only metadata for the Discord server, such as the current invite links and introductory messages.

## channels.yaml

This file sets out the topics for all channels that are publicly viewable and need a topic set. These are set automatically by [The Bot](https://github.com/AkBKukU/discord-bot).

## Contributing

Pull requests for this repository are open, so if you have any ideas for changes to rules or the topics for channels, please fork and PR this repo!

If your changes are merged they'll be visible in the Discord within a few hours. 

Alternatively, you can drop a message in our #feedback channel in Discord.
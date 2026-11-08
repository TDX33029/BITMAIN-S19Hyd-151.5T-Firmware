// FUN_016731b0 @ 016731b0 size=412 calls_out=3 calls_in=27
// strings: $schema | http://json-schema.org/draft-07/schema | http://json-schema.org/draft-06/schema | http://json-schema.org/draft-04/schema | http://json-schema.org/draft/2020-12/schema | http://json-schema.org/draft/2019-09/schema

undefined4 FUN_016731b0(undefined4 param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*param_2 != '\x05') {
    return param_1;
  }
  pcVar1 = (char *)FUN_0196b3a8(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),"$schema",
                                7);
  if (pcVar1 == (char *)0x0) {
    return param_1;
  }
  if (*pcVar1 != '\x03') {
    return param_1;
  }
  uVar5 = FUN_016754c8(*(undefined4 *)(pcVar1 + 8),*(undefined4 *)(pcVar1 + 0xc));
  uVar4 = (undefined4)uVar5;
  switch((int)((ulonglong)uVar5 >> 0x20)) {
  case 0x26:
    iVar2 = thunk_FUN_01bed842(uVar4,"http://json-schema.org/draft-07/schema",0x26);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = thunk_FUN_01bed842(uVar4,"http://json-schema.org/draft-06/schema",0x26);
    if (iVar2 == 0) {
      return 1;
    }
    uVar3 = 0x26;
    pcVar1 = "http://json-schema.org/draft-04/schema";
    goto LAB_016732f0;
  case 0x27:
    iVar2 = thunk_FUN_01bed842(uVar4,"https://json-schema.org/draft-07/schema",0x27);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = thunk_FUN_01bed842(uVar4,"https://json-schema.org/draft-06/schema",0x27);
    if (iVar2 == 0) {
      return 1;
    }
    uVar3 = 0x27;
    pcVar1 = "https://json-schema.org/draft-04/schema";
LAB_016732f0:
    iVar2 = thunk_FUN_01bed842(uVar4,pcVar1,uVar3);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = 5;
    }
    return uVar4;
  default:
    goto LAB_01673360;
  case 0x2b:
    iVar2 = thunk_FUN_01bed842(uVar4,"http://json-schema.org/draft/2020-12/schema",0x2b);
    if (iVar2 == 0) {
      return 4;
    }
    uVar3 = 0x2b;
    pcVar1 = "http://json-schema.org/draft/2019-09/schema";
    break;
  case 0x2c:
    iVar2 = thunk_FUN_01bed842(uVar4,"https://json-schema.org/draft/2020-12/schema",0x2c);
    if (iVar2 == 0) {
      return 4;
    }
    uVar3 = 0x2c;
    pcVar1 = 
    "https://json-schema.org/draft/2019-09/schemahttps://json-schema.org/draft/2019-09/meta/applicatorhttps://json-schema.org/draft/2019-09/meta/contenthttps://json-schema.org/draft/2019-09/meta/corehttps://json-schema.org/draft/2019-09/meta/formathttps://json-schema.org/draft/2019-09/meta/meta-datahttps://json-schema.org/draft/2019-09/meta/validation"
    ;
  }
  iVar2 = thunk_FUN_01bed842(uVar4,pcVar1,uVar3);
  if (iVar2 == 0) {
    return 3;
  }
LAB_01673360:
  return 5;
}


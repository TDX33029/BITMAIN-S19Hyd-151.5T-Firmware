// FUN_016e1ac8 @ 016e1ac8 size=384 calls_out=4 calls_in=1
// strings: 

void FUN_016e1ac8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_3c [24];
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e1884(param_1,auStack_3c,param_5,0);
  if (iVar1 != 0) {
    uVar3 = param_4 >> 0x18;
    uVar5 = uVar3;
    uVar4 = 0x38;
    while (uVar3 == 0) {
      uVar6 = uVar4 - 8;
      if (uVar4 == 0) {
        iVar1 = FUN_016e17e0(auStack_3c,0);
        if (iVar1 == 0) goto LAB_016e1bbc;
        goto LAB_016e1b74;
      }
      uVar5 = param_3 >> (uVar6 & 0xff) | param_4 << (0x20 - uVar6 & 0xff) |
              param_4 >> (uVar4 - 0x28 & 0xff);
      uVar4 = uVar6;
      uVar3 = uVar5 & 0xff;
    }
    if (((uVar5 & 0x80) == 0) || (iVar1 = FUN_016e17e0(auStack_3c,0), iVar1 != 0)) {
      while (iVar1 = FUN_016e17e0(auStack_3c,uVar3), iVar1 != 0) {
        uVar5 = uVar4 - 8;
        if (uVar4 == 0) goto LAB_016e1b74;
        uVar3 = (param_3 >> (uVar5 & 0xff) | param_4 << (0x20 - uVar5 & 0xff) |
                param_4 >> (uVar4 - 0x28 & 0xff)) & 0xff;
        uVar4 = uVar5;
      }
    }
  }
LAB_016e1bbc:
  if (*(char *)(param_1 + 1) == '\0') {
    puVar2 = param_1 + 2;
  }
  else {
    puVar2 = (undefined4 *)param_1[2];
  }
  lVar7 = ZEXT48(puVar2) << 0x20;
  *(byte *)(puVar2 + 3) = *(byte *)(puVar2 + 3) | 2;
  *param_1 = 0;
LAB_016e1be4:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)lVar7,(int)((ulonglong)lVar7 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
LAB_016e1b74:
  lVar7 = FUN_016e1048(param_1);
  goto LAB_016e1be4;
}


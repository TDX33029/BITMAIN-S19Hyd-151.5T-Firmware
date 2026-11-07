// FUN_0158f188 @ 0158f188 size=192 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_0158f188(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  uVar3 = 1;
  if (*param_2 == '\x05') {
    if (1 < *(uint *)(param_2 + 0xc)) {
      uVar3 = *(undefined4 *)(param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 8);
      iVar1 = FUN_0196b2cc(uVar3,uVar5,*(undefined4 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0x14));
      if ((iVar1 != 0) &&
         (iVar1 = FUN_0196b2cc(uVar3,uVar5,*(undefined4 *)(param_1 + 0x1c),
                               *(undefined4 *)(param_1 + 0x20)), iVar1 != 0)) {
        if (*(int *)(param_1 + 8) == 0) {
          return 1;
        }
        iVar1 = *(int *)(param_1 + 8) << 5;
        puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + 8);
        while ((iVar2 = FUN_0196b2cc(uVar3,uVar5,puVar4[-1],*puVar4), iVar2 == 0 ||
               (iVar2 = FUN_01577618(puVar4 + 1,iVar2,param_3), iVar2 != 0))) {
          puVar4 = puVar4 + 8;
          iVar1 = iVar1 + -0x20;
          if (iVar1 == 0) {
            return 1;
          }
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


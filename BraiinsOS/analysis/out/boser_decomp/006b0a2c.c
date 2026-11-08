// FUN_006b0a2c @ 006b0a2c size=464 calls_out=6 calls_in=4
// strings: 

void FUN_006b0a2c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = FUN_006e59bc(param_3,param_4,param_5);
  if ((iVar1 == 0) && (iVar1 = FUN_006c176c(*param_2,param_2[1],param_4,param_5), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    uVar4 = 2;
    if (-1 < iVar2) {
      iVar2 = 2;
    }
    pcVar3 = *(code **)(iVar1 + *(int *)(iVar2 * 4 + 0x534cb0));
    if ((pcVar3 == (code *)0x0) || (iVar2 = (*pcVar3)(param_1), iVar2 != 0)) {
      FUN_006e6200(param_3,param_4,param_5);
      if ((int)*(uint *)(iVar1 + 0x10) < 0) {
        uVar4 = *(uint *)(iVar1 + 0x10) ^ 0x80000000;
      }
      switch(uVar4) {
      case 1:
        iVar2 = *(int *)(iVar1 + 0x2c);
        for (iVar1 = *(int *)(iVar1 + 0x30) * 0xc0; iVar1 != 0; iVar1 = iVar1 + -0xc0) {
          FUN_006b0ca4(param_1,param_2,param_3,iVar2);
          iVar2 = iVar2 + 0xc0;
        }
        break;
      case 2:
        iVar5 = *(int *)(iVar1 + 0x14);
        for (iVar2 = *(int *)(iVar1 + 0x18) * 0xc0; iVar2 != 0; iVar2 = iVar2 + -0xc0) {
          FUN_006b0ca4(param_1,param_2,param_3,iVar5);
          iVar5 = iVar5 + 0xc0;
        }
        iVar2 = *(int *)(iVar1 + 0x44);
        for (iVar1 = *(int *)(iVar1 + 0x48) << 4; iVar1 != 0; iVar1 = iVar1 + -0x10) {
          FUN_006b0a2c(param_1,param_2,param_3,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8)
                      );
          iVar2 = iVar2 + 0x10;
        }
        break;
      case 3:
        iVar2 = *(int *)(iVar1 + 0x34);
        for (iVar1 = *(int *)(iVar1 + 0x38) << 4; iVar1 != 0; iVar1 = iVar1 + -0x10) {
          FUN_006b0a2c(param_1,param_2,param_3,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8)
                      );
          iVar2 = iVar2 + 0x10;
        }
        break;
      case 5:
        iVar2 = *(int *)(iVar1 + 0x34);
        for (iVar1 = *(int *)(iVar1 + 0x38) * 0x6c; iVar1 != 0; iVar1 = iVar1 + -0x6c) {
          FUN_006b0c14(param_1,param_2,param_3,iVar2 + 0xc);
          iVar2 = iVar2 + 0x6c;
        }
      }
    }
  }
  return;
}


// FUN_0117e8cc @ 0117e8cc size=376 calls_out=3 calls_in=0
// strings: 

int FUN_0117e8cc(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  uint local_58 [3];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar1 = 0;
  if (*param_2 == '\x05') {
    local_58[2] = *(uint *)(param_2 + 4);
    local_4c = *(undefined4 *)(param_2 + 8);
    local_38 = *(undefined4 *)(param_2 + 0xc);
    iVar3 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_1 + 4);
    if (local_58[2] == 0) {
      local_38 = 0;
    }
    local_58[0] = (uint)(local_58[2] != 0);
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_4c;
    if (iVar3 == 0) {
      do {
        uVar8 = FUN_00f45584(local_58);
        iVar1 = (int)uVar8;
        if (iVar1 == 0) {
          return 0;
        }
        iStack_2c = *(int *)(iVar1 + 8);
        local_30 = *(undefined4 *)(iVar1 + 4);
        local_34 = 0x80000000;
        uStack_28 = param_3;
        iVar1 = FUN_011d018c(param_1 + 0xc,(int)((ulonglong)uVar8 >> 0x20),&local_34,param_4,param_5
                            );
      } while (iVar1 == 0);
    }
    else {
      do {
        uVar8 = FUN_00f45584(local_58);
        iVar1 = (int)uVar8;
        if (iVar1 == 0) {
          return 0;
        }
        uVar4 = *(undefined4 *)(iVar1 + 4);
        iVar5 = *(int *)(iVar1 + 8);
        local_34 = 0x80000000;
        iVar1 = iVar3 << 5;
        iVar7 = iVar6;
        local_30 = uVar4;
        iStack_2c = iVar5;
        uStack_28 = param_3;
        do {
          if ((*(int *)(iVar7 + 8) == iVar5) &&
             (iVar2 = thunk_FUN_016dd50a(*(undefined4 *)(iVar7 + 4),uVar4,iVar5), iVar2 == 0)) {
            iVar1 = iVar7 + 0xc;
            goto LAB_0117e958;
          }
          iVar7 = iVar7 + 0x20;
          iVar1 = iVar1 + -0x20;
        } while (iVar1 != 0);
        iVar1 = param_1 + 0xc;
LAB_0117e958:
        iVar1 = FUN_011d018c(iVar1,(int)((ulonglong)uVar8 >> 0x20),&local_34,param_4,param_5);
      } while (iVar1 == 0);
    }
  }
  return iVar1;
}


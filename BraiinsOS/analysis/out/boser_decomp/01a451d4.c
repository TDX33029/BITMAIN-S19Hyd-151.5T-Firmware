// FUN_01a451d4 @ 01a451d4 size=292 calls_out=3 calls_in=1
// strings: 

void FUN_01a451d4(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  
  if (param_3 < param_2) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    if (param_3 != 0) {
      uVar4 = 0;
      iVar1 = *(int *)(param_4 + 0xc);
      do {
        uVar6 = *(undefined4 *)(param_4 + 8);
        FUN_01a47010(&local_40,param_4);
        if (local_40 != 3) {
          if (local_40 != 1) {
            *param_1 = local_40;
            param_1[1] = iStack_3c;
            param_1[2] = iStack_38;
            param_1[3] = iStack_34;
            param_1[4] = local_30;
            param_1[5] = local_2c;
            return;
          }
          if (param_2 <= uVar4) {
            *param_1 = 3;
            *(undefined4 *)(param_4 + 8) = uVar6;
            *(int *)(param_4 + 0xc) = iVar1;
            FUN_0134aee0(iStack_3c,iStack_38,4,0xc);
            FUN_012d40d0(local_30,local_2c);
            return;
          }
          piVar2 = (int *)((uint)&local_40 | 4);
          iVar3 = piVar2[1];
          iVar5 = piVar2[2];
          iVar7 = piVar2[3];
          iVar8 = piVar2[4];
          iVar1 = 1;
          param_1[1] = *piVar2;
          param_1[2] = iVar3;
          param_1[3] = iVar5;
          param_1[4] = iVar7;
          param_1[5] = iVar8;
          goto LAB_01a452b4;
        }
        if (*(int *)(param_4 + 0xc) == iVar1) {
          param_1[1] = 0;
          param_1[2] = 4;
          param_1[3] = 0;
          param_1[4] = 0;
          iVar1 = 2;
          goto LAB_01a452b4;
        }
        uVar4 = uVar4 + 1;
        iVar1 = *(int *)(param_4 + 0xc);
      } while (param_3 != uVar4);
    }
    iVar1 = 3;
LAB_01a452b4:
    *param_1 = iVar1;
  }
  return;
}


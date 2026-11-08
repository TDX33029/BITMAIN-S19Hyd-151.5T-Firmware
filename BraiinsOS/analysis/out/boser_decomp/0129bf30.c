// FUN_0129bf30 @ 0129bf30 size=360 calls_out=5 calls_in=1
// strings: 

void FUN_0129bf30(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  uint *local_78;
  int local_74;
  uint local_70;
  int *local_6c;
  uint local_68;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30 [3];
  
  uVar9 = FUN_012b92cc(param_2);
  if ((int)uVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  FUN_012b9714(&local_60,param_2);
  uVar6 = 0;
  uVar2 = local_60 + 1;
  if (local_60 == -1) {
    uVar2 = 0xffffffff;
  }
  uVar5 = uVar2;
  if (uVar2 < 5) {
    uVar5 = 4;
  }
  bVar8 = 0x1ffffffe < uVar2;
  bVar7 = uVar2 == 0x1fffffff;
  uVar1 = uVar5 * 8;
  if (uVar2 < 0x20000000) {
    bVar8 = 0x7ffffffb < uVar1;
    bVar7 = uVar1 == 0x7ffffffc;
    local_78 = param_1;
    local_74 = (int)((ulonglong)uVar9 >> 0x20);
  }
  if (!bVar8 || bVar7) {
    uVar6 = 4;
    piVar3 = (int *)FUN_01298504(uVar1,4);
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)uVar9;
      piVar3[1] = local_74;
      local_68 = 1;
      local_60 = *param_2;
      iStack_5c = param_2[1];
      iStack_58 = param_2[2];
      iStack_54 = param_2[3];
      iStack_50 = param_2[4];
      iStack_4c = param_2[5];
      local_48 = param_2[6];
      iStack_44 = param_2[7];
      iStack_40 = param_2[8];
      iStack_3c = param_2[9];
      iStack_38 = param_2[10];
      iStack_34 = param_2[0xb];
      uVar2 = 0;
      local_70 = uVar5;
      local_6c = piVar3;
      while (uVar9 = FUN_012b92cc(&local_60), (int)uVar9 != 0) {
        uVar5 = uVar2 + 1;
        if (uVar5 == local_70) {
          FUN_012b9714(local_30,&local_60);
          iVar4 = local_30[0] + 1;
          if (local_30[0] == -1) {
            iVar4 = -1;
          }
          FUN_006520b4(&local_70,uVar5,iVar4,4,8);
          piVar3 = local_6c;
        }
        *(undefined8 *)(piVar3 + uVar2 * 2 + 2) = uVar9;
        local_68 = uVar2 + 2;
        uVar2 = uVar5;
      }
      *local_78 = local_70;
      local_78[1] = (uint)local_6c;
      local_78[2] = local_68;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar1);
}


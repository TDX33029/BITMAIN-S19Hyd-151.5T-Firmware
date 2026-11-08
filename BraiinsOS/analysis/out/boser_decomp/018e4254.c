// FUN_018e4254 @ 018e4254 size=360 calls_out=5 calls_in=1
// strings: 

void FUN_018e4254(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uStack_4c;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  FUN_01930f74(&local_34,&DAT_0056a6b8,param_2);
  if ((char)local_34 == '\x18') {
    uVar10 = FUN_0192fac8(param_2,local_30);
    if ((int)uVar10 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0xb;
    }
    else {
      iVar9 = 4;
      local_44 = 0;
      local_38 = 0;
      local_3c = 4;
      local_40 = 0;
      if ((int)((ulonglong)uVar10 >> 0x20) != 0) {
        iVar8 = 8;
        do {
          iVar1 = local_38;
          uStack_4c = uVar10;
          FUN_018ed9cc(&local_34,&uStack_4c);
          uVar5 = uStack_28;
          uVar4 = local_2c;
          iVar3 = local_30;
          iVar2 = local_34;
          if (local_34 == -0x80000000) {
            *param_1 = 1;
            param_1[1] = local_30;
            param_1[2] = local_2c;
            param_1[3] = uStack_28;
            FUN_018e2610(&local_40);
            return;
          }
          uVar10 = uStack_4c;
          if (iVar1 == local_40) {
            FUN_018fa978(&local_40);
            iVar9 = local_3c;
            uVar10 = uStack_4c;
          }
          uStack_4c._4_4_ = (uint)((ulonglong)uVar10 >> 0x20);
          piVar6 = (int *)(iVar9 + iVar1 * 0x10);
          *piVar6 = iVar2;
          local_38 = iVar1 + 1;
          piVar6[1] = iVar3;
          puVar7 = (undefined4 *)(iVar9 + iVar8);
          *puVar7 = uVar4;
          iVar8 = iVar8 + 0x10;
          puVar7[1] = uVar5;
        } while (local_44 < uStack_4c._4_4_);
      }
      param_1[1] = local_40;
      param_1[2] = local_3c;
      param_1[3] = local_38;
      *param_1 = 0;
    }
  }
  else {
    *(char *)(param_1 + 1) = (char)local_34;
    *(undefined1 *)((int)param_1 + 7) = local_34._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_34._1_2_;
    param_1[2] = local_30;
    param_1[3] = local_2c;
    *param_1 = 1;
  }
  return;
}


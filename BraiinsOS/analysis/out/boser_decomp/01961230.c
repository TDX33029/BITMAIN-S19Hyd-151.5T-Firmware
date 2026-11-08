// FUN_01961230 @ 01961230 size=432 calls_out=7 calls_in=2
// strings: 

void FUN_01961230(undefined8 *param_1,int param_2,int param_3)

{
  short sVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_48;
  int local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [12];
  
  if (param_3 == 0) {
    puVar7 = (undefined4 *)FUN_01961624();
    sVar1 = *(short *)(param_2 + 0x8a);
    uVar8 = 0;
    *(undefined2 *)((int)puVar7 + 0x8a) = 0;
    *puVar7 = 0;
    if (sVar1 != 0) {
      puVar5 = (undefined4 *)(param_2 + 8);
      do {
        FUN_006666fc(&local_48,*puVar5,puVar5[1]);
        FUN_0196081c(local_30,puVar7,&local_48);
        puVar5 = puVar5 + 3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(param_2 + 0x8a));
    }
    *(undefined4 **)param_1 = puVar7;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(uint *)(param_1 + 1) = uVar8;
  }
  else {
    FUN_01961230(&local_48,*(undefined4 *)(param_2 + 0x8c));
    if ((int)local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_48 = FUN_01960938((int)local_48,local_48._4_4_);
    uVar2 = (ulonglong)local_48 >> 0x20;
    uVar4 = (undefined4)local_48;
    if (*(short *)(param_2 + 0x8a) != 0) {
      puVar7 = (undefined4 *)(param_2 + 8);
      uVar8 = 0;
      iVar9 = local_40;
      do {
        FUN_006666fc(local_30,*puVar7,puVar7[1]);
        FUN_01961230(&local_3c,*(undefined4 *)(param_2 + 0x90 + uVar8 * 4),param_3 + -1);
        iVar3 = local_34;
        if (local_3c == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_01961624();
          uVar6 = 0;
          *(undefined2 *)((int)puVar5 + 0x8a) = 0;
          *puVar5 = 0;
        }
        else {
          uVar6 = local_38;
          puVar5 = local_3c;
        }
        FUN_01960890(uVar4,(int)uVar2,local_30,puVar5,uVar6);
        puVar7 = puVar7 + 3;
        uVar8 = uVar8 + 1;
        iVar9 = iVar3 + iVar9 + 1;
      } while (uVar8 < *(ushort *)(param_2 + 0x8a));
      local_40 = iVar9;
    }
    *param_1 = local_48;
    *(int *)(param_1 + 1) = local_40;
  }
  return;
}


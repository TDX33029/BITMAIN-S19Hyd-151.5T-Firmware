// FUN_0067de34 @ 0067de34 size=520 calls_out=7 calls_in=2
// strings: 

void FUN_0067de34(undefined8 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 local_58;
  int local_50;
  undefined1 local_48 [12];
  undefined4 *local_3c;
  undefined4 local_38;
  int local_34;
  undefined1 local_30 [12];
  
  if (param_3 == 0) {
    puVar7 = (undefined4 *)FUN_00ab2960();
    uVar8 = 0;
    *puVar7 = 0;
    uVar1 = *(ushort *)(param_2 + 0x10e);
    *(undefined2 *)((int)puVar7 + 0x10e) = 0;
    if (uVar1 != 0) {
      puVar5 = (undefined4 *)(param_2 + 0x90);
      do {
        FUN_006666fc(&local_58,puVar5[-0x22],puVar5[-0x21]);
        FUN_006666fc(local_48,puVar5[-1],*puVar5);
        FUN_0067db88(local_30,puVar7,&local_58,local_48);
        puVar5 = puVar5 + 3;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ushort *)(param_2 + 0x10e));
    }
    *(undefined4 **)param_1 = puVar7;
    *(undefined4 *)((int)param_1 + 4) = 0;
    *(uint *)(param_1 + 1) = uVar8;
  }
  else {
    FUN_0067de34(&local_58,*(undefined4 *)(param_2 + 0x110));
    if ((int)local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_58 = FUN_0067dc1c((int)local_58,local_58._4_4_);
    uVar2 = (ulonglong)local_58 >> 0x20;
    uVar4 = (undefined4)local_58;
    if (*(ushort *)(param_2 + 0x10e) != 0) {
      puVar7 = (undefined4 *)(param_2 + 0x8c);
      uVar8 = 0;
      iVar9 = local_50;
      do {
        FUN_006666fc(local_48,puVar7[-0x21],puVar7[-0x20]);
        FUN_006666fc(local_30,*puVar7,puVar7[1]);
        FUN_0067de34(&local_3c,*(undefined4 *)(param_2 + 0x114 + uVar8 * 4),param_3 + -1);
        iVar3 = local_34;
        if (local_3c == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_00ab2960();
          uVar6 = 0;
          *puVar5 = 0;
          *(undefined2 *)((int)puVar5 + 0x10e) = 0;
        }
        else {
          puVar5 = local_3c;
          uVar6 = local_38;
        }
        FUN_0067dc98(uVar4,(int)uVar2,local_48,local_30,puVar5,uVar6);
        puVar7 = puVar7 + 3;
        uVar8 = uVar8 + 1;
        iVar9 = iVar3 + iVar9 + 1;
      } while (uVar8 < *(ushort *)(param_2 + 0x10e));
      local_50 = iVar9;
    }
    *param_1 = local_58;
    *(int *)(param_1 + 1) = local_50;
  }
  return;
}


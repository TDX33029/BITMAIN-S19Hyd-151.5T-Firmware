// FUN_009ca2b4 @ 009ca2b4 size=504 calls_out=8 calls_in=2
// strings: 

void FUN_009ca2b4(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint local_140;
  undefined1 auStack_13c [12];
  undefined1 local_130 [120];
  undefined1 auStack_b8 [124];
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  
  if (param_3 == 0) {
    iVar10 = FUN_01adb66c();
    uVar9 = 0;
    puVar11 = (ushort *)(param_2 + 0x5b2);
    uVar1 = *puVar11;
    *(undefined2 *)(iVar10 + 0x5b2) = 0;
    *(undefined4 *)(iVar10 + 0x528) = 0;
    local_140 = 0;
    if (uVar1 != 0) {
      puVar8 = (undefined4 *)(param_2 + 0x530);
      do {
        FUN_006666fc(auStack_13c,*puVar8,puVar8[1]);
        FUN_009ca558(local_130,param_2);
        FUN_01ad2728(&local_30,iVar10,auStack_13c,local_130);
        puVar8 = puVar8 + 3;
        uVar9 = uVar9 + 1;
        param_2 = param_2 + 0x78;
      } while (uVar9 < *puVar11);
      local_140 = uVar9;
    }
    *param_1 = iVar10;
    param_1[1] = 0;
    param_1[2] = local_140;
  }
  else {
    FUN_009ca2b4(&local_30,*(undefined4 *)(param_2 + 0x5b8));
    if ((int)local_30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_30 = FUN_01ad3890((int)local_30,local_30._4_4_);
    uVar2 = (ulonglong)local_30 >> 0x20;
    uVar4 = (undefined4)local_30;
    puVar11 = (ushort *)(param_2 + 0x5b2);
    if (*puVar11 != 0) {
      uVar9 = 0;
      puVar8 = (undefined4 *)(param_2 + 0x530);
      iVar5 = param_2 + 0x5bc;
      iVar10 = local_28;
      do {
        FUN_006666fc(local_130,*puVar8,puVar8[1]);
        FUN_009ca558(auStack_b8,param_2);
        FUN_009ca2b4(&local_3c,*(undefined4 *)(iVar5 + uVar9 * 4),param_3 + -1);
        iVar3 = local_34;
        if (local_3c == 0) {
          iVar6 = FUN_01adb66c();
          uVar7 = 0;
          *(undefined2 *)(iVar6 + 0x5b2) = 0;
          *(undefined4 *)(iVar6 + 0x528) = 0;
        }
        else {
          iVar6 = local_3c;
          uVar7 = local_38;
        }
        FUN_01ad35cc(uVar4,(int)uVar2,local_130,auStack_b8,iVar6,uVar7);
        puVar8 = puVar8 + 3;
        uVar9 = uVar9 + 1;
        iVar10 = iVar3 + iVar10 + 1;
        param_2 = param_2 + 0x78;
      } while (uVar9 < *puVar11);
      local_28 = iVar10;
    }
    *(undefined8 *)param_1 = local_30;
    param_1[2] = local_28;
  }
  return;
}


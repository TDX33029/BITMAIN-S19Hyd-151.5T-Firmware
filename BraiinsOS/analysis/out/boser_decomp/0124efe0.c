// FUN_0124efe0 @ 0124efe0 size=696 calls_out=7 calls_in=2
// strings: 

void FUN_0124efe0(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int local_9c;
  undefined8 local_88;
  int local_80;
  int local_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_44 [12];
  
  if (param_3 == 0) {
    iVar10 = FUN_0124a0c4();
    uVar2 = *(ushort *)(param_2 + 0x242);
    uVar9 = 0;
    *(undefined2 *)(iVar10 + 0x242) = 0;
    *(undefined4 *)(iVar10 + 0x1b8) = 0;
    if (uVar2 != 0) {
      iVar11 = 0;
      iVar12 = 0;
      do {
        FUN_006666fc(&local_88,*(undefined4 *)(param_2 + iVar12 + 0x1c0),
                     *(undefined4 *)(param_2 + iVar12 + 0x1c4));
        puVar6 = (undefined4 *)(param_2 + iVar11);
        local_70 = *puVar6;
        local_68 = *(undefined8 *)(puVar6 + 2);
        local_58 = *(undefined8 *)(puVar6 + 6);
        local_60 = puVar6[4];
        uStack_5c = puVar6[5];
        local_6c = puVar6[1];
        local_50 = *(undefined1 *)(puVar6 + 8);
        FUN_0124eb5c(local_44,iVar10,&local_88,&local_70);
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 0xc;
        iVar11 = iVar11 + 0x28;
      } while (uVar9 < *(ushort *)(param_2 + 0x242));
    }
    *param_1 = iVar10;
    param_1[1] = 0;
    param_1[2] = uVar9;
  }
  else {
    FUN_0124efe0(&local_88,*(undefined4 *)(param_2 + 0x248));
    if ((int)local_88 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27490);
    }
    local_88 = FUN_0124ecbc((int)local_88,local_88._4_4_);
    uVar3 = (ulonglong)local_88 >> 0x20;
    uVar4 = (undefined4)local_88;
    if (*(ushort *)(param_2 + 0x242) != 0) {
      iVar11 = 0;
      iVar12 = 0;
      local_9c = 0x93;
      iVar10 = local_80;
      do {
        iVar5 = param_2 + iVar12 * 4;
        FUN_006666fc(local_44,*(undefined4 *)(iVar5 + 0x1c0),*(undefined4 *)(iVar5 + 0x1c4));
        puVar6 = (undefined4 *)(param_2 + iVar11);
        uVar13 = *puVar6;
        uVar14 = puVar6[1];
        uVar15 = *(undefined8 *)(puVar6 + 6);
        uVar16 = *(undefined8 *)(puVar6 + 2);
        uVar1 = *(undefined1 *)(puVar6 + 8);
        FUN_0124efe0(&local_7c,*(undefined4 *)(param_2 + local_9c * 4),param_3 + -1);
        iVar5 = iStack_74;
        iVar7 = local_7c;
        uVar8 = uStack_78;
        local_70 = uVar13;
        local_6c = uVar14;
        local_68 = uVar16;
        local_58 = uVar15;
        local_50 = uVar1;
        if (local_7c == 0) {
          iVar7 = FUN_0124a0c4();
          uVar8 = 0;
          *(undefined2 *)(iVar7 + 0x242) = 0;
          *(undefined4 *)(iVar7 + 0x1b8) = 0;
        }
        FUN_0124ebec(uVar4,(int)uVar3,local_44,&local_70,iVar7,uVar8);
        iVar12 = iVar12 + 3;
        iVar10 = iVar5 + iVar10 + 1;
        iVar11 = iVar11 + 0x28;
        uVar9 = local_9c - 0x92;
        local_9c = local_9c + 1;
      } while (uVar9 < *(ushort *)(param_2 + 0x242));
      local_80 = iVar10;
    }
    *(undefined8 *)param_1 = local_88;
    param_1[2] = local_80;
  }
  return;
}


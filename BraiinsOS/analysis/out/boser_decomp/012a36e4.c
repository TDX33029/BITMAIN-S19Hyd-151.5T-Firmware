// FUN_012a36e4 @ 012a36e4 size=884 calls_out=14 calls_in=1
// strings: 

void FUN_012a36e4(int param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined *local_78;
  undefined1 auStack_6c [12];
  undefined4 *local_60;
  undefined *local_5c;
  undefined4 *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  if ((param_4 & 0xff) == 2) {
    if (*(int *)(param_3 + 0x50) != 0) {
      puVar8 = *(undefined4 **)(param_3 + 0x4c);
      puVar15 = puVar8 + *(int *)(param_3 + 0x50) * 2;
      do {
        FUN_012c02fc(param_2,*puVar8,puVar8[1]);
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar15);
    }
    iVar9 = 0;
    puVar8 = *(undefined4 **)(param_2 + 0x24);
    puVar15 = (undefined4 *)0x0;
    local_58 = (undefined4 *)0x0;
    local_5c = (undefined *)0x4;
    local_60 = (undefined4 *)0x0;
    if (*(int *)(param_2 + 0x28) != 0) {
      puVar5 = puVar8 + *(int *)(param_2 + 0x28) * 2;
      uVar12 = *(undefined4 *)(param_3 + 0x114);
      iVar10 = *(int *)(param_3 + 0x118);
      local_78 = (undefined *)0x4;
      do {
        iVar3 = FUN_012a4878(*(undefined4 *)(*(int *)(param_1 + 8) + 0x48),
                             *(undefined4 *)(*(int *)(param_1 + 8) + 0x4c),*puVar8,puVar8[1]);
        if (iVar3 != 0) {
          piVar14 = (int *)(*(int *)(iVar3 + 0x4c) + 4);
          for (iVar13 = *(int *)(iVar3 + 0x50) << 3; iVar13 != 0; iVar13 = iVar13 + -8) {
            if ((*piVar14 == iVar10) &&
               (iVar4 = thunk_FUN_01bed842(piVar14[-1],uVar12,iVar10), iVar4 == 0)) {
              if (puVar15 == local_60) {
                FUN_01a54b48(&local_60);
                local_78 = local_5c;
              }
              *(int *)(local_78 + (int)puVar15 * 4) = iVar3 + 0x114;
              puVar15 = (undefined4 *)((int)puVar15 + 1);
              local_58 = puVar15;
              break;
            }
            piVar14 = piVar14 + 2;
          }
        }
        puVar8 = puVar8 + 2;
      } while (puVar8 != puVar5);
    }
    puVar2 = local_5c;
    puVar8 = local_60;
    for (; (int)puVar15 * 4 != iVar9; iVar9 = iVar9 + 4) {
      puVar5 = *(undefined4 **)(puVar2 + iVar9);
      FUN_012c02fc(param_2,*puVar5,puVar5[1]);
    }
    FUN_0134aee0(puVar8,puVar2,4,4);
    FUN_012bfac0(param_2,param_3,2);
  }
  else {
    FUN_012bfac0(param_2,param_3,param_4);
    if ((param_4 & 0xff) == 0) {
      return;
    }
  }
  iVar10 = *(int *)(*(int *)(param_1 + 8) + 0x6c);
  uVar12 = *(undefined4 *)(param_3 + 0x114);
  puVar8 = (undefined4 *)(iVar10 + 0x24);
  uVar6 = *(undefined4 *)(param_3 + 0x118);
  iVar9 = *(int *)(*(int *)(param_1 + 8) + 0x70) * 0x30;
  do {
    if (iVar9 == 0) {
      return;
    }
    iVar3 = FUN_012a949c(uVar12,uVar6,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
    if (iVar3 != 0) {
      uVar11 = *puVar8;
      uVar16 = puVar8[1];
      FUN_012b19c8(auStack_6c,param_2 + 0x20,uVar11,uVar16);
      local_48 = 4;
      local_30 = 4;
      local_3c = 4;
      local_44 = 0;
      local_4c = 0;
      local_2c = 0;
      local_34 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = (undefined4 *)0x0;
      local_28 = 0x300;
      iVar3 = FUN_012b15f4(auStack_6c,&local_60);
      bVar1 = *(byte *)(iVar3 + 0x39);
      bVar7 = bVar1;
      if ((uint)bVar1 < (param_4 & 0xff)) {
        bVar7 = (byte)param_4;
      }
      if (bVar1 == 3) {
        bVar7 = (byte)param_4;
      }
      *(byte *)(iVar3 + 0x39) = bVar7;
      FUN_012bfc00();
      puVar15 = (undefined4 *)thunk_FUN_01be5118(0x10);
      if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x10);
      }
      *puVar15 = 1;
      puVar15[1] = 1;
      puVar15[2] = uVar12;
      puVar15[3] = uVar6;
      local_5c = &DAT_01ce2564;
      local_58 = (undefined4 *)0xd21d1e74;
      uStack_54 = 0x5364cdb0;
      uStack_50 = 0xea671cec;
      local_4c = 0x99b641e;
      local_60 = puVar15;
      FUN_012bbd90(auStack_6c);
      FUN_012bf574(param_2,uVar11,uVar16,&local_60,auStack_6c);
    }
    iVar10 = iVar10 + 0x30;
    iVar9 = iVar9 + -0x30;
    puVar8 = puVar8 + 0xc;
  } while( true );
}


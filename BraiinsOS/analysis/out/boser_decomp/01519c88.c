// FUN_01519c88 @ 01519c88 size=1156 calls_out=18 calls_in=1
// strings: $recursiveRef | $recursiveRef

void FUN_01519c88(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  int *local_130;
  int *piStack_12c;
  int *piStack_128;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_e8;
  int *local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  int local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int *local_40;
  undefined *local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*param_4 != '\x03') {
    piVar14 = (int *)FUN_01546624(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                                  "$recursiveRef",0xd,param_4);
    piVar8 = (int *)0x0;
    goto LAB_0151a044;
  }
  uVar12 = *(undefined4 *)(param_4 + 8);
  uVar11 = *(undefined4 *)(param_4 + 0xc);
  uVar15 = FUN_01572f20(param_2);
  uVar9 = (undefined4)((ulonglong)uVar15 >> 0x20);
  piVar14 = (int *)uVar15;
  uVar15 = FUN_015345a4(piVar14,uVar9,"$recursiveRef",0xd);
  uVar10 = (undefined4)((ulonglong)uVar15 >> 0x20);
  piVar5 = (int *)uVar15;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar14;
    bVar2 = (bool)hasExclusiveAccess(piVar14);
  } while (!bVar2);
  *piVar14 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar14,uVar9);
  }
  FUN_01571584(&local_e8,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),uVar12,
               uVar11);
  piVar4 = local_e4;
  if (local_e8 == (int *)0x8000000a) {
    uVar16 = FUN_01546690(local_e4 + 2);
    uVar9 = (undefined4)((ulonglong)uVar16 >> 0x20);
    piVar7 = (int *)uVar16;
    FUN_01571650(&local_120,param_2,uVar12,uVar11);
    piVar14 = local_11c;
    if (local_120 == (int *)&DAT_00000001) {
LAB_01519f88:
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + -1;
      bVar2 = true;
      piVar8 = (int *)0x0;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar7,uVar9);
      }
    }
    else {
      if (local_11c == (int *)0x0) {
        FUN_01572f88(&local_e8,param_2,uVar12,uVar11);
        if (local_e8 == (int *)0x8000000a) {
          FUN_01571e38(&local_e8,param_2);
          if (local_e8 == (int *)0x8000000a) {
            local_120 = (int *)local_e0;
            local_11c = local_e0._4_4_;
            local_118 = (int *)local_d8;
            uVar13 = local_d8._4_4_ & 0xff;
            piVar14 = local_e4;
            if (uVar13 != 6) {
              local_130 = (int *)local_e0;
              piStack_12c = local_e0._4_4_;
              piStack_128 = (int *)local_d8;
              FUN_0166c584(&local_120,*(undefined4 *)(param_2 + 0x4c),uVar13,local_e4);
              do {
                iVar6 = *piVar7;
                bVar2 = (bool)hasExclusiveAccess(piVar7);
              } while (!bVar2);
              *piVar7 = iVar6 + 1;
              if (iVar6 < 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)software_udf(0xfdee,0x151a110);
                (*pcVar1)();
              }
              FUN_01571d9c(&local_e8,param_2,&local_130,uVar13,&local_120,uVar16);
              FUN_0156b060(&local_58,&local_e8,local_e4,piVar4);
              if (local_58 == 0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar6 = *piVar5;
                  bVar2 = (bool)hasExclusiveAccess(piVar5);
                } while (!bVar2);
                *piVar5 = iVar6 + -1;
                if (iVar6 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0070451c(piVar5,uVar10);
                }
                DataMemoryBarrier(0xb);
                do {
                  iVar6 = *piVar7;
                  bVar2 = (bool)hasExclusiveAccess(piVar7);
                } while (!bVar2);
                *piVar7 = iVar6 + -1;
                if (iVar6 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_0070451c(piVar7,uVar9);
                }
                piVar8 = (int *)0x0;
                piVar14 = (int *)FUN_01594a60(local_54);
              }
              else {
                local_40 = (int *)thunk_FUN_01be5118(0x14);
                if (local_40 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,0x14);
                }
                *local_40 = local_58;
                local_40[1] = local_54;
                local_40[2] = iStack_50;
                local_40[3] = iStack_4c;
                local_40[4] = iStack_48;
                local_3c = &DAT_01cfb76c;
                local_38 = uVar15;
                local_30 = uVar16;
                piVar8 = (int *)thunk_FUN_01be5118(0x18);
                if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0066439c(4,0x18);
                }
                piVar14 = (int *)&DAT_01cfb74c;
                *piVar8 = (int)local_40;
                piVar8[1] = (int)local_3c;
                *(undefined8 *)(piVar8 + 2) = local_38;
                *(undefined8 *)(piVar8 + 4) = local_30;
              }
              FUN_014ff9e0(&local_e8);
              goto LAB_0151a044;
            }
          }
          else {
            piVar14 = (int *)FUN_01545ee0(&local_e8);
          }
        }
        else {
          piVar14 = (int *)FUN_01545ee0(&local_e8);
        }
        goto LAB_01519f88;
      }
      local_e4 = local_118;
      local_e8 = local_11c;
      local_e0 = uVar15;
      local_d8 = uVar16;
      piVar8 = (int *)thunk_FUN_01be5118(0x18);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      bVar2 = false;
      piVar14 = (int *)&DAT_01cfb74c;
      *piVar8 = (int)local_e8;
      piVar8[1] = (int)local_e4;
      *(undefined8 *)(piVar8 + 2) = local_e0;
      *(undefined8 *)(piVar8 + 4) = local_d8;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar4;
      bVar3 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar3);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar4);
    }
    if (!bVar2) goto LAB_0151a044;
  }
  else {
    piVar14 = (int *)FUN_01545ee0(&local_e8);
    piVar8 = (int *)0x0;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0070451c(piVar5,uVar10);
  }
LAB_0151a044:
  *param_1 = 1;
  param_1[1] = piVar8;
  param_1[2] = piVar14;
  return;
}


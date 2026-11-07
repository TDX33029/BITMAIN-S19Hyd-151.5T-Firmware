// FUN_015137dc @ 015137dc size=916 calls_out=11 calls_in=0
// strings: 

int FUN_015137dc(int *param_1,char *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  undefined8 uVar21;
  int local_a8;
  uint local_80 [3];
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = 0;
  if (*param_2 == '\x05') {
    local_80[2] = *(uint *)(param_2 + 4);
    local_74 = *(undefined4 *)(param_2 + 8);
    local_60 = *(undefined4 *)(param_2 + 0xc);
    iVar3 = *param_1;
    if (local_80[2] == 0) {
      local_60 = 0;
    }
    local_80[0] = (uint)(local_80[2] != 0);
    uVar8 = param_1[1];
    iVar9 = param_1[3];
    local_6c = 0;
    local_80[1] = 0;
    local_70 = local_80[0];
    local_68 = local_80[2];
    local_64 = local_74;
LAB_01513878:
    uVar21 = FUN_01a41998(local_80);
    iVar6 = (int)uVar21;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    else {
      if (iVar9 != 0) {
        uVar11 = *(undefined4 *)(iVar6 + 4);
        iVar13 = *(int *)(iVar6 + 8);
        uVar4 = FUN_0155d010(param_1 + 4,uVar11,iVar13);
        uVar17 = uVar4 >> 0x19;
        local_a8 = 0;
        while( true ) {
          uVar4 = uVar8 & uVar4;
          uVar19 = *(uint *)(iVar3 + uVar4);
          uVar5 = uVar19 ^ uVar17 * 0x1010101;
          uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
          while (uVar5 != 0) {
            uVar15 = uVar5 - 1 & uVar5;
            uVar18 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) &
                     uVar8;
            iVar10 = iVar3 + -0x20 + uVar18 * -0x20;
            uVar5 = uVar15;
            if (iVar13 == *(int *)(iVar10 + 8)) {
              uVar16 = *(undefined4 *)(iVar10 + 4);
              iVar10 = thunk_FUN_01bed842(uVar11,uVar16,iVar13);
              if (iVar10 == 0) {
                local_5c = 0x80000000;
                local_58 = uVar16;
                local_54 = iVar13;
                local_50 = param_3;
                iVar6 = FUN_015776f4(iVar3 + -0x14 + uVar18 * -0x20,(int)((ulonglong)uVar21 >> 0x20)
                                     ,&local_5c,param_4,param_5);
                if (iVar6 != 0) {
                  return iVar6;
                }
                goto LAB_01513878;
              }
            }
          }
          if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
          local_a8 = local_a8 + 4;
          uVar4 = uVar4 + local_a8;
        }
      }
      piVar14 = (int *)param_1[0xc];
      do {
        iVar3 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_01513b5c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1513b5c);
        (*pcVar1)();
      }
      uVar8 = param_1[0xd];
      if (param_4 == 0) {
        local_5c = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar12 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_01513b5c;
        piVar20 = piVar14 + 2;
        uVar11 = *(undefined4 *)(param_4 + 0x10);
        uVar17 = (*(int **)(param_4 + 4))[1];
        if (uVar8 < uVar17) {
          uVar17 = 0;
        }
        else {
          iVar3 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,piVar20,uVar17);
          if (iVar3 != 0) {
            uVar17 = 0;
          }
          piVar20 = (int *)((int)piVar20 + uVar17);
        }
        local_44 = FUN_016bc0ec(piVar20,uVar8 - uVar17);
        local_50 = 3;
        local_5c = 2;
        local_4c = piVar12;
        local_48 = uVar11;
      }
      uVar21 = FUN_01531840(param_3);
      puVar7 = (undefined4 *)thunk_FUN_01be5118(0xc);
      if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      FUN_006666fc(&local_30,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 8));
      *puVar7 = local_30;
      puVar7[1] = uStack_2c;
      puVar7[2] = uStack_28;
      local_34 = 1;
      local_3c = 1;
      local_38 = puVar7;
      iVar3 = FUN_01595b0c(piVar14,uVar8,&local_5c,(int)uVar21,(int)((ulonglong)uVar21 >> 0x20),
                           param_2,&local_3c);
    }
  }
  return iVar3;
}


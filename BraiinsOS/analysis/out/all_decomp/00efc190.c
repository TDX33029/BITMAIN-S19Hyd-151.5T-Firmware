// FUN_00efc190 @ 00efc190 size=1216 calls_out=12 calls_in=1
// strings: 

void FUN_00efc190(undefined1 *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int unaff_r4;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int local_64;
  char local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  uint uStack_5d;
  undefined4 *puStack_59;
  uint uStack_55;
  uint uStack_51;
  uint local_48;
  undefined4 *local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint *local_30;
  code *local_2c;
  undefined4 uStack_28;
  
  FUN_00efbe38(&local_60);
  if (CONCAT13((undefined1)uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60))) == 1) {
    puVar7 = (uint *)CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
LAB_00efc2c8:
    *(uint **)(param_1 + 4) = puVar7;
    *param_1 = 9;
    return;
  }
  local_34 = CONCAT13((undefined1)uStack_51,uStack_55._1_3_);
  local_38 = CONCAT13((undefined1)uStack_55,puStack_59._1_3_);
  if (local_34 != 0) {
    local_2c = FUN_00fac4cc;
    local_30 = &local_38;
    FUN_00600d2c(&local_48,&DAT_00584bb4,&local_30);
    puVar7 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar7 = local_48;
    puVar7[1] = (uint)local_44;
    puVar7[2] = local_40;
    goto LAB_00efc2c8;
  }
  switch(local_38) {
  case 0:
    uVar6 = 0;
    break;
  case 1:
    FUN_00efbe38(&local_48,param_2);
    uVar20 = local_40;
    if (local_48 == 1) {
      puVar8 = local_44;
    }
    else {
      local_34 = local_3c;
      local_38 = local_40;
      if (local_3c == 0) {
        uVar19 = 0x15555;
        if (local_40 < 0x15555) {
          uVar19 = local_40;
        }
        if (local_40 == 0) {
          puVar9 = (undefined4 *)&DAT_00000004;
          uVar19 = 0;
        }
        else {
          puVar9 = (undefined4 *)thunk_FUN_016d4a50(uVar19 * 0xc);
          if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,uVar19 * 0xc);
          }
        }
        local_40 = 0;
        local_64 = 0;
        local_48 = uVar19;
        local_44 = puVar9;
LAB_00efc59c:
        uVar19 = local_40;
        if (uVar20 != local_40) {
          FUN_00f16f58(&local_60,param_2);
          puVar5 = local_44;
          iVar11 = CONCAT13((undefined1)uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)));
          puVar8 = (undefined4 *)CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
          if (iVar11 != -0x80000000) goto code_r0x00efc5c0;
          puVar9 = local_44 + 1;
          for (; uVar19 != 0; uVar19 = uVar19 - 1) {
            if (puVar9[-1] != 0) {
              thunk_FUN_016d3fb4(*puVar9);
            }
            puVar9 = puVar9 + 3;
          }
          if (local_48 != 0) {
            thunk_FUN_016d3fb4(puVar5);
          }
          goto LAB_00efc64c;
        }
        puVar8 = local_44;
        if (local_48 != 0x80000000) {
          *(uint *)(param_1 + 4) = local_48;
          *(undefined4 **)(param_1 + 8) = local_44;
          uVar6 = 1;
          *(uint *)(param_1 + 0xc) = local_40;
          break;
        }
      }
      else {
        puStack_59 = (undefined4 *)0x5674cc00;
        local_60 = (char)&local_38;
        uStack_5f = (undefined1)((uint)&local_38 >> 8);
        uStack_5e = (undefined1)((uint)&local_38 >> 0x10);
        uStack_5d._0_1_ = (undefined1)((uint)&local_38 >> 0x18);
        uStack_5d = CONCAT31(0xfac4cc,(undefined1)uStack_5d);
        uStack_55 = 0xfac48400;
        uStack_51 = uStack_51 & 0xffffff00;
        FUN_00600d2c(&local_30,&DAT_0056c1eb,&local_60);
        puVar8 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar8 = local_30;
        puVar8[1] = local_2c;
        puVar8[2] = uStack_28;
      }
    }
LAB_00efc64c:
    *(undefined4 **)(param_1 + 4) = puVar8;
    goto LAB_00efc650;
  case 2:
    uVar6 = 2;
    break;
  case 3:
    uVar6 = 3;
    break;
  case 4:
    uVar6 = 4;
    break;
  case 5:
    FUN_00e6679c(&local_60,param_2);
    if (local_60 == '\0') {
      param_1[1] = uStack_5f;
      uVar6 = 5;
      break;
    }
    local_44 = (undefined4 *)CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
    goto LAB_00efc3b4;
  case 6:
    FUN_00f182ac(&local_48,param_2);
    if (local_48 != 3) {
      puStack_59 = local_44;
      uStack_5d = local_48;
      uStack_55 = local_40;
      uStack_51 = local_3c;
      FUN_016dd1aa(param_1 + 1,&local_60,0x13);
      uVar6 = 6;
      break;
    }
LAB_00efc3b4:
    *(undefined4 **)(param_1 + 4) = local_44;
LAB_00efc650:
    uVar6 = 9;
    break;
  case 7:
    FUN_00f16f58(&local_60,param_2);
    iVar11 = CONCAT13((undefined1)uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)));
    iVar17 = CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
    if (iVar11 == -0x80000000) {
LAB_00efc3d8:
      *(int *)(param_1 + 4) = iVar17;
      *param_1 = 9;
      return;
    }
    uVar4 = CONCAT13((undefined1)uStack_55,puStack_59._1_3_);
    FUN_00f182ac(&local_60,param_2);
    iVar12 = CONCAT13((undefined1)uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)));
    uVar14 = CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
    if (iVar12 == 3) {
LAB_00efc4c8:
      *param_1 = 9;
      *(undefined4 *)(param_1 + 4) = uVar14;
      if (iVar11 == 0) {
        return;
      }
      if (iVar17 == 0) {
        return;
      }
      iVar11 = FUN_016d3bc8();
      uVar20 = *(byte *)(iVar17 + -3) & 0x1f;
      if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
         (uVar19 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar12 = uVar19 - 0x10, uVar19 == 0)) {
        iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2)
                 << 4;
      }
      uVar19 = (uint)(*(byte *)(iVar17 + -3) >> 5);
      iVar18 = *(int *)(iVar11 + 8) + 0x10;
      iVar15 = iVar12 * uVar20 + iVar12 + -4;
      iVar12 = iVar18 + iVar15;
      if (4 < uVar19) {
        if (uVar19 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar19 = *(uint *)(iVar12 + -4);
        if (uVar19 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar12 - iVar17) < uVar19) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar12 - uVar19) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar18 + iVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar11 + 0x14);
      uVar19 = 1 << uVar20;
      *(undefined1 *)(iVar17 + -3) = 0xff;
      *(undefined2 *)(iVar17 + -2) = 0;
      do {
        uVar16 = *(uint *)(iVar11 + 0x10);
        uVar13 = *(uint *)(iVar11 + 0xc) | uVar16;
        if ((uVar19 & uVar13) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar16 == 0) || (uVar13 + uVar19 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar11,uVar20);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar9 = (undefined4 *)FUN_016d2bc8();
          uVar14 = *puVar9;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar9 = uVar14;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar11 + 0x10) = uVar19 + uVar16;
          return;
        }
        puVar7 = (uint *)(iVar11 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar7);
          uVar13 = *puVar7;
          if (uVar16 != uVar13) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar3);
        *puVar7 = uVar19 + uVar16;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar16 == uVar13) {
          return;
        }
      } while( true );
    }
    *(int *)(param_1 + 0x10) = iVar12;
    *(undefined4 *)(param_1 + 0x14) = uVar14;
    *(uint *)(param_1 + 0x18) = CONCAT13((undefined1)uStack_55,puStack_59._1_3_);
    *(uint *)(param_1 + 0x1c) = CONCAT13((undefined1)uStack_51,uStack_55._1_3_);
    uVar6 = 7;
    *(int *)(param_1 + 4) = iVar11;
    *(int *)(param_1 + 8) = iVar17;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    break;
  case 8:
    FUN_00f16f58(&local_60,param_2);
    iVar11 = CONCAT13((undefined1)uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)));
    iVar17 = CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
    if (iVar11 == -0x80000000) goto LAB_00efc3d8;
    uVar4 = CONCAT13((undefined1)uStack_55,puStack_59._1_3_);
    FUN_00f182ac(&local_60,param_2);
    iVar12 = CONCAT13((undefined1)uStack_5d,CONCAT12(uStack_5e,CONCAT11(uStack_5f,local_60)));
    uVar14 = CONCAT13(puStack_59._0_1_,uStack_5d._1_3_);
    if (iVar12 == 3) goto LAB_00efc4c8;
    *(int *)(param_1 + 0x10) = iVar12;
    *(undefined4 *)(param_1 + 0x14) = uVar14;
    *(uint *)(param_1 + 0x18) = CONCAT13((undefined1)uStack_55,puStack_59._1_3_);
    *(uint *)(param_1 + 0x1c) = CONCAT13((undefined1)uStack_51,uStack_55._1_3_);
    uVar6 = 8;
    *(int *)(param_1 + 4) = iVar11;
    *(int *)(param_1 + 8) = iVar17;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    break;
  default:
    local_48 = CONCAT31(local_48._1_3_,1);
    local_60 = (char)&local_48;
    uStack_5f = (undefined1)((uint)&local_48 >> 8);
    uStack_5e = (undefined1)((uint)&local_48 >> 0x10);
    local_2c = (code *)&DAT_018ab990;
    local_30 = (uint *)&DAT_0187d090;
    uStack_55 = CONCAT31(0x15452c,(char)((uint)&local_30 >> 0x18));
    uStack_51 = CONCAT31(uStack_51._1_3_,1);
    uStack_5d = CONCAT31(0x579e10,(char)((uint)&local_48 >> 0x18));
    puStack_59 = (undefined4 *)CONCAT31((int3)&local_30,1);
    local_40 = local_38;
    local_3c = local_34;
    puVar7 = (uint *)FUN_00e94644(&DAT_0058e458,&local_60);
    goto LAB_00efc2c8;
  }
  *param_1 = uVar6;
  return;
code_r0x00efc5c0:
  iVar17 = CONCAT13((undefined1)uStack_55,puStack_59._1_3_);
  if (uVar19 == local_48) {
    FUN_015f37b0(&local_48);
    puVar9 = local_44;
  }
  local_40 = uVar19 + 1;
  piVar10 = (int *)((int)puVar9 + local_64);
  *piVar10 = iVar11;
  local_64 = local_64 + 0xc;
  piVar10[1] = (int)puVar8;
  piVar10[2] = iVar17;
  goto LAB_00efc59c;
}


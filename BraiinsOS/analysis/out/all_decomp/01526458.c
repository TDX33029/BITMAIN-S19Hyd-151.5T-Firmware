// FUN_01526458 @ 01526458 size=888 calls_out=5 calls_in=2
// strings: 

void FUN_01526458(int param_1,uint *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined4 local_c0;
  uint local_bc;
  uint local_b8;
  char local_b0;
  undefined1 local_af;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined2 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar3 = *(undefined2 *)((int)param_2 + 0xe);
  uVar4 = (undefined2)param_2[3];
  uVar1 = *(undefined1 *)((int)param_2 + 0x11);
  cVar2 = (char)param_2[4];
  iVar5 = param_1 + 0x1fc;
  uVar16 = param_2[1];
  uVar18 = param_2[2];
  uVar6 = *(uint *)(param_1 + 0x244);
  uVar17 = uVar16;
  do {
    if (uVar18 == 0) {
      if ((*param_2 & 0x7fffffff) == 0) {
        return;
      }
      thunk_FUN_016d3fb4(uVar16);
      return;
    }
    local_c0 = 0;
    uVar12 = uVar6;
    if (uVar18 < uVar6) {
      uVar12 = uVar18;
    }
    local_c4 = uVar4;
    local_c2 = uVar3;
    local_bc = uVar17;
    local_b8 = uVar12;
    local_b0 = cVar2;
    local_af = uVar1;
    if (cVar2 == '\x01') {
      FUN_0152c928(&local_ac,param_1,&local_c4);
      iVar15 = *(int *)(param_1 + 0x234);
      iVar14 = *(int *)(param_1 + 0x238);
      iVar13 = *(int *)(param_1 + 0x23c);
      *(undefined4 *)(param_1 + 0x234) = 0x80000000;
      if (iVar15 != -0x80000000) {
        if (iVar13 == 0) {
          if (iVar15 != 0) {
            thunk_FUN_016d3fb4(iVar14);
          }
        }
        else {
          uVar7 = *(uint *)(param_1 + 0x1fc);
          uVar9 = *(uint *)(param_1 + 0x208);
          if (uVar9 == uVar7) {
            FUN_01561020(iVar5);
            uVar7 = *(uint *)(param_1 + 0x1fc);
            uVar9 = *(uint *)(param_1 + 0x208);
          }
          uVar10 = *(int *)(param_1 + 0x204) + uVar9;
          *(uint *)(param_1 + 0x208) = uVar9 + 1;
          uVar9 = uVar10 - uVar7;
          if (uVar10 < uVar7) {
            uVar9 = uVar10;
          }
          piVar11 = (int *)(*(int *)(param_1 + 0x200) + uVar9 * 0xc);
          *piVar11 = iVar15;
          piVar11[1] = iVar14;
          piVar11[2] = iVar13;
        }
      }
      FUN_01533edc(&local_30,&local_ac);
      if (local_28 == 0) {
LAB_0152678c:
        if (local_30 != 0) {
          thunk_FUN_016d3fb4(local_2c);
        }
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x1fc);
        uVar9 = *(uint *)(param_1 + 0x208);
        if (uVar9 == uVar7) {
          FUN_01561020(iVar5);
LAB_015264c0:
          uVar7 = *(uint *)(param_1 + 0x1fc);
          uVar9 = *(uint *)(param_1 + 0x208);
        }
LAB_015264c8:
        uVar8 = *(int *)(param_1 + 0x204) + uVar9;
        uVar10 = uVar8 - uVar7;
        if (uVar8 < uVar7) {
          uVar10 = uVar8;
        }
        *(uint *)(param_1 + 0x208) = uVar9 + 1;
        piVar11 = (int *)(*(int *)(param_1 + 0x200) + uVar10 * 0xc);
        *piVar11 = local_30;
        piVar11[1] = local_2c;
        piVar11[2] = local_28;
      }
    }
    else {
      iVar13 = *(int *)(param_1 + 0x24);
      if (*(uint *)(param_1 + 0x20) == *(uint *)(param_1 + 0x18) &&
          iVar13 == *(int *)(param_1 + 0x1c)) {
        if (*(short *)(param_1 + 0x240) == 5) {
          *(undefined1 *)(param_1 + 0x25b) = 1;
LAB_01526628:
          FUN_0152c928(&local_ac,param_1,&local_c4);
          iVar13 = *(int *)(param_1 + 0x234);
          iVar15 = *(int *)(param_1 + 0x238);
          iVar14 = *(int *)(param_1 + 0x23c);
          *(undefined4 *)(param_1 + 0x234) = 0x80000000;
          if (iVar13 != -0x80000000) {
            if (iVar14 == 0) {
              if (iVar13 != 0) {
                thunk_FUN_016d3fb4(iVar15);
              }
            }
            else {
              uVar7 = *(uint *)(param_1 + 0x1fc);
              uVar9 = *(uint *)(param_1 + 0x208);
              if (uVar9 == uVar7) {
                FUN_01561020(iVar5);
                uVar7 = *(uint *)(param_1 + 0x1fc);
                uVar9 = *(uint *)(param_1 + 0x208);
              }
              uVar10 = *(int *)(param_1 + 0x204) + uVar9;
              *(uint *)(param_1 + 0x208) = uVar9 + 1;
              uVar9 = uVar10 - uVar7;
              if (uVar10 < uVar7) {
                uVar9 = uVar10;
              }
              piVar11 = (int *)(*(int *)(param_1 + 0x200) + uVar9 * 0xc);
              *piVar11 = iVar13;
              piVar11[1] = iVar15;
              piVar11[2] = iVar14;
            }
          }
          FUN_01533edc(&local_30,&local_ac);
          if (local_28 == 0) goto LAB_0152678c;
          uVar7 = *(uint *)(param_1 + 0x1fc);
          uVar9 = *(uint *)(param_1 + 0x208);
          if (uVar9 == uVar7) {
            FUN_01561020(iVar5);
            goto LAB_015264c0;
          }
          goto LAB_015264c8;
        }
        if (*(char *)(param_1 + 0x255) == '\0') {
          *(undefined2 *)(param_1 + 0x255) = 0x101;
          local_a8 = 0;
          local_ac = 0x80000001;
          local_34 = 4;
          FUN_01525ed4(param_1,&local_ac,*(char *)(param_1 + 0x31) == '\x02');
        }
      }
      else if (iVar13 != -1 || -iVar13 - 1U < (uint)(*(uint *)(param_1 + 0x20) < 0xfffffffe))
      goto LAB_01526628;
    }
    uVar17 = uVar17 + uVar12;
    uVar18 = uVar18 - uVar12;
  } while( true );
}


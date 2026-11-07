// FUN_0132dad8 @ 0132dad8 size=1328 calls_out=5 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0132de44) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0132dad8(int *param_1,int *param_2,undefined1 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  bool bVar17;
  bool bVar18;
  int local_88;
  uint local_7c;
  uint local_64;
  int local_60;
  uint local_5c;
  undefined1 *local_50;
  int local_4c;
  undefined1 *local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined1 *local_30;
  uint local_2c;
  
  uVar14 = param_2[0xc];
  puVar10 = (uint *)(param_2 + 10);
  uVar13 = param_2[0xd];
  if (((uVar14 & uVar13) != 0xffffffff) &&
     (uVar1 = *puVar10 + param_2[0xe],
     uVar11 = param_2[0xb] + (uint)CARRY4(*puVar10,param_2[0xe]) + (uint)(uVar14 < uVar1),
     uVar13 == uVar11 && (uint)(param_3 <= (undefined1 *)(uVar14 - uVar1)) <= uVar13 - uVar11)) {
    *(undefined1 *)(param_1 + 1) = 8;
    *param_1 = 1;
    return;
  }
  puVar7 = (undefined1 *)*param_4;
  param_4[2] = 0;
  bVar18 = (undefined1 *)0x98967e < param_3;
  bVar17 = param_3 == (undefined1 *)0x98967f;
  if ((undefined1 *)0x98967f < param_3) {
    bVar18 = puVar7 <= param_3;
    bVar17 = param_3 == puVar7;
  }
  if (bVar18 && !bVar17) {
    puVar15 = (undefined1 *)0x0;
    if (puVar7 < &LAB_00989680) {
      FUN_0132f8cc(param_4,0,&LAB_00989680,1,1);
      puVar15 = (undefined1 *)param_4[2];
    }
    iVar2 = *param_2;
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    local_7c = param_2[4];
    local_88 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    local_50 = (undefined1 *)param_2[8];
    local_64 = param_2[9];
    local_5c = *puVar10;
    local_60 = param_2[0xb];
    uVar11 = param_2[0xe];
    uVar1 = param_2[0xf];
    while (puVar15 < param_3) {
      puVar7 = param_3 + -(int)puVar15;
      if (puVar15 < puVar7) {
        puVar8 = (undefined1 *)*param_4;
        if ((undefined1 *)*param_4 == puVar15) {
          FUN_0132f8cc(param_4,puVar15,1,1,1);
          puVar15 = (undefined1 *)param_4[2];
          puVar8 = (undefined1 *)*param_4;
        }
      }
      else {
        puVar8 = (undefined1 *)*param_4;
        if (puVar8 + -(int)puVar15 < puVar7) {
          FUN_0132f2a4(&local_40,puVar8,param_4[1],param_3,1,1);
          if (local_40 != 0) goto LAB_0132dffc;
          *param_4 = param_3;
          param_4[1] = local_3c;
          puVar8 = param_3;
        }
      }
      puVar16 = puVar8 + -(int)puVar15;
      if (puVar7 < puVar8 + -(int)puVar15) {
        puVar16 = puVar7;
      }
      if (uVar11 == uVar1) {
        if (uVar14 == local_5c + uVar1 && uVar13 == local_60 + (uint)CARRY4(local_5c,uVar1)) {
          uVar11 = uVar1;
        }
        else {
          param_2[0xe] = 0;
          bVar17 = CARRY4(local_5c,local_64);
          local_5c = local_5c + local_64;
          local_50 = (undefined1 *)0x1;
          local_60 = local_60 + (uint)bVar17;
          param_2[8] = 1;
          param_2[0xf] = 0;
          *puVar10 = local_5c;
          param_2[0xb] = local_60;
          param_2[9] = 0;
          uVar11 = 0;
          if (iVar2 == 0) {
            if (iVar3 == 0) {
              iVar12 = param_2[3];
              (**(code **)(iVar12 + 0x30))(iVar4,local_64);
              (**(code **)(iVar12 + 0x2c))(&local_4c,iVar4);
              local_50 = local_48;
              local_64 = local_44;
              if (local_4c != 0) {
LAB_0132dfb4:
                *param_1 = 0;
                param_1[1] = (int)local_50;
                param_1[2] = local_64;
                return;
              }
            }
            else {
              uVar1 = local_64 + param_2[3];
              if (local_7c < local_64 + param_2[3]) {
                uVar1 = local_7c;
              }
              param_2[3] = uVar1;
              if (local_7c <= uVar1) {
                local_34 = local_88;
                local_38 = 0;
                local_40 = iVar3;
                local_3c = iVar4;
                (**(code **)(iVar6 + 0x24))(&local_30,iVar5,&local_40);
                param_2[3] = 0;
                param_2[4] = local_38;
                local_88 = local_34;
                param_2[5] = local_34;
                if ((char)local_30 != '\x04') {
                  local_64 = local_2c;
                  local_50 = local_30;
                  goto LAB_0132dfb4;
                }
                uVar1 = 0;
                local_7c = local_38;
              }
              local_44 = local_7c - uVar1;
              local_48 = (undefined1 *)(uVar1 + iVar3);
              local_4c = 0;
            }
            param_2[8] = (int)local_48;
            uVar9 = local_60 + (uint)CARRY4(local_5c,local_44);
            uVar1 = local_44;
            if (uVar13 <= uVar9 && (uint)(local_5c + local_44 <= uVar14) <= uVar13 - uVar9) {
              uVar1 = uVar14 - local_5c;
            }
            param_2[9] = local_44;
            param_2[0xf] = uVar1;
            local_64 = local_44;
            local_50 = local_48;
          }
          else {
            uVar1 = 0;
            local_64 = 0;
          }
        }
      }
      puVar7 = (undefined1 *)(uVar1 - uVar11);
      if (puVar16 < (undefined1 *)(uVar1 - uVar11)) {
        puVar7 = puVar16;
      }
      FUN_016dd1aa(puVar15 + param_4[1],local_50 + uVar11,puVar7);
      puVar15 = puVar15 + (int)puVar7;
      uVar11 = uVar11 + (int)puVar7;
      param_2[0xe] = uVar11;
      param_4[2] = puVar15;
      if (puVar7 == (undefined1 *)0x0) {
        *(undefined1 *)(param_1 + 1) = 8;
        *param_1 = 1;
        return;
      }
    }
  }
  else {
    if (puVar7 < param_3) {
      FUN_0132f2a4(&local_40,puVar7,param_4[1],param_3,1,1);
      if (local_40 == 1) {
LAB_0132dffc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(local_3c,local_38);
      }
      *param_4 = param_3;
      param_4[1] = local_3c;
      iVar2 = local_3c;
    }
    else {
      iVar2 = param_4[1];
    }
    FUN_0132e008(&local_40,param_2,iVar2,param_3);
    if (local_40 != 4) {
      *param_1 = local_40;
      param_1[1] = local_3c;
      param_1[2] = local_38;
      return;
    }
    param_4[2] = param_3;
  }
  *param_1 = 4;
  return;
}


// FUN_016dee78 @ 016dee78 size=708 calls_out=2 calls_in=1
// strings: 

void FUN_016dee78(int param_1,int param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  int *piVar14;
  bool bVar15;
  uint local_68;
  uint local_60;
  int *local_5c;
  int local_54;
  int local_50;
  int local_48;
  uint local_44;
  uint local_2c;
  uint local_28;
  
  if (param_1 == param_2) {
    uVar11 = 0;
    local_5c = (int *)0x0;
    local_44 = 0;
    local_48 = param_1;
  }
  else {
    uVar11 = 0xffffffff;
    local_5c = (int *)(param_1 + 0x18);
    local_48 = param_1 + 0x1c;
    local_44 = *(uint *)(*local_5c + 0x10);
    local_54 = *(int *)(*local_5c + 0x14);
  }
  local_28 = 0;
  bVar4 = 1;
  bVar5 = 1;
  local_2c = 0;
  uVar10 = 0;
  uVar9 = 0;
  bVar15 = true;
  iVar7 = 0;
  bVar13 = false;
  local_50 = 0;
  uVar12 = uVar11;
  do {
    bVar3 = false;
    bVar2 = bVar5;
    do {
      iVar8 = iVar7;
      bVar1 = bVar3;
      if (bVar15) {
        piVar14 = local_5c;
        if (param_1 == param_2) {
LAB_016df0b4:
          piVar14 = (int *)thunk_FUN_01be5118(0x34);
          if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x34);
          }
          piVar14[8] = uVar11;
          *(byte *)((int)piVar14 + 0x32) = bVar2 & 1;
          piVar14[9] = uVar10;
          *(undefined1 *)((int)piVar14 + 0x31) = 0;
          *(byte *)(piVar14 + 0xc) = bVar4 & 1;
          piVar14[10] = local_2c;
          piVar14[0xb] = local_28;
          *piVar14 = local_50;
          piVar14[1] = local_60;
          piVar14[2] = iVar8;
          piVar14[3] = local_68;
          piVar14[4] = local_44;
          piVar14[5] = local_54;
          piVar14[6] = uVar9;
          piVar14[7] = uVar12;
          return;
        }
      }
      else {
        if (local_48 == param_2) goto LAB_016df0b4;
        piVar14 = (int *)(local_48 + 0x18);
        local_48 = local_48 + 0x1c;
      }
      piVar14 = (int *)*piVar14;
      bVar5 = bVar4 & 1;
      bVar4 = 0;
      if (bVar5 != 0) {
        bVar4 = *(byte *)(piVar14 + 0xc);
      }
      bVar15 = CARRY4(local_28,piVar14[0xb]);
      local_28 = local_28 + piVar14[0xb];
      if (bVar15) {
        local_28 = 0xffffffff;
      }
      if ((piVar14[4] & local_44) == 0) {
        if (piVar14[4] != 0 || local_44 != 0) goto LAB_016defc4;
      }
      else if (local_54 != piVar14[5]) {
LAB_016defc4:
        local_44 = 0;
      }
      bVar5 = 0;
      if ((bVar2 & 1) != 0) {
        bVar5 = *(byte *)((int)piVar14 + 0x31);
      }
      if (bVar13) {
LAB_016df040:
        bVar13 = true;
      }
      else {
        if (*piVar14 == 0) {
          local_50 = 0;
          goto LAB_016df040;
        }
        uVar6 = piVar14[1];
        bVar13 = false;
        if (uVar6 < local_60) {
          local_60 = uVar6;
        }
        if (local_50 == 0) {
          local_60 = uVar6;
        }
        local_50 = 1;
      }
      uVar11 = piVar14[8] & uVar11;
      uVar12 = piVar14[7] & uVar12;
      local_2c = piVar14[10] | local_2c;
      uVar10 = piVar14[9] | uVar10;
      bVar15 = false;
      uVar9 = piVar14[6] | uVar9;
      bVar3 = true;
      bVar2 = bVar5;
      iVar7 = iVar8;
    } while ((bVar1) || (iVar7 = 0, piVar14[2] != 1));
    uVar6 = piVar14[3];
    if (local_68 < uVar6) {
      local_68 = uVar6;
    }
    if (iVar8 == 0) {
      local_68 = uVar6;
    }
    iVar7 = 1;
  } while( true );
}


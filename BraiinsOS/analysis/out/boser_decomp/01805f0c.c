// FUN_01805f0c @ 01805f0c size=672 calls_out=4 calls_in=0
// strings: 

void FUN_01805f0c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint *puVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  undefined *unaff_r4;
  undefined *unaff_r5;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint uVar13;
  int unaff_r11;
  uint *local_5c;
  undefined1 auStack_58 [20];
  char local_44 [4];
  char local_40 [4];
  undefined *local_3c;
  int local_38;
  char local_34;
  undefined2 local_33;
  undefined1 local_31;
  undefined *local_30;
  undefined2 *local_2c;
  char local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  uVar12 = 1;
  if ((int)*(uint *)(param_2 + 8) < 0) {
    uVar12 = *(uint *)(param_2 + 8) ^ 0x80000000;
  }
  local_5c = *(uint **)(param_2 + 0xc);
  puVar11 = &local_27;
  pcVar2 = (char *)(param_2 + 0x18);
  puVar3 = local_5c + *(int *)(param_2 + 0x10) * 4;
  do {
    if (uVar12 == 0) {
      puVar11 = (undefined2 *)&DAT_00000005;
      uVar12 = 2;
      local_28 = '\x01';
      unaff_r4 = &DAT_0050c55c;
      unaff_r11 = 7;
      unaff_r5 = &DAT_0050c563;
      local_34 = '\x01';
    }
    else {
      if (uVar12 != 1) goto LAB_01806170;
      if (puVar3 == local_5c) {
        cVar1 = '\x02';
        pcVar7 = local_40;
      }
      else {
        uVar12 = *local_5c;
        uVar8 = local_5c[1];
        iVar4 = 4;
        if (*pcVar2 != '\0') {
          iVar4 = 8;
        }
        iVar9 = *(int *)(pcVar2 + iVar4);
        iVar4 = 8;
        if (*pcVar2 != '\0') {
          iVar4 = 0xc;
        }
        uVar6 = *(uint *)(pcVar2 + iVar4);
        if (uVar8 < uVar12) goto LAB_01806198;
        uVar13 = local_5c[2];
        uVar10 = local_5c[3];
        if (uVar12 != 0) {
          if (uVar12 < uVar6) {
            if (-0x41 < *(char *)(iVar9 + uVar12)) goto LAB_01806018;
          }
          else if (uVar12 == uVar6) goto LAB_01806018;
          goto LAB_01806198;
        }
LAB_01806018:
        if (uVar8 != 0) {
          if (uVar8 < uVar6) {
            if (*(char *)(iVar9 + uVar8) < -0x40) {
LAB_01806198:
              puVar5 = &DAT_01d1d898;
              uVar13 = uVar12;
              uVar10 = uVar8;
              goto LAB_018061a0;
            }
          }
          else if (uVar8 != uVar6) goto LAB_01806198;
        }
        if (uVar10 < uVar13) goto LAB_01806184;
        if (uVar13 != 0) {
          if (uVar13 < uVar6) {
            if (-0x41 < *(char *)(iVar9 + uVar13)) goto LAB_01806070;
          }
          else if (uVar13 == uVar6) goto LAB_01806070;
          goto LAB_01806184;
        }
LAB_01806070:
        if (uVar10 != 0) {
          if (uVar10 < uVar6) {
            if (*(char *)(iVar9 + uVar10) < -0x40) {
LAB_01806184:
              puVar5 = &DAT_01d1d8a8;
LAB_018061a0:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(iVar9,uVar6,uVar13,uVar10,puVar5);
            }
          }
          else if (uVar10 != uVar6) goto LAB_01806184;
        }
        unaff_r11 = uVar8 - uVar12;
        unaff_r4 = (undefined *)(iVar9 + uVar12);
        cVar1 = false;
        if (unaff_r11 == 7) {
          iVar4 = thunk_FUN_01bed842(unaff_r4,&DAT_0050c55c,7);
          cVar1 = iVar4 == 0;
        }
        puVar11 = (undefined2 *)(uVar10 - uVar13);
        unaff_r5 = (undefined *)(iVar9 + uVar13);
        local_5c = local_5c + 4;
        local_40[0] = '\x01';
        pcVar7 = local_44;
      }
      *pcVar7 = cVar1;
      if (local_40[0] == '\x02') {
LAB_01806170:
        *(undefined1 *)(param_1 + 8) = 2;
        return;
      }
      uVar12 = 1;
      local_28 = local_44[0];
      local_34 = local_40[0];
    }
    local_27 = 0;
    local_25 = 0;
    local_33 = 0;
    local_31 = 0;
    local_3c = unaff_r4;
    local_38 = unaff_r11;
    local_30 = unaff_r5;
    local_2c = puVar11;
    iVar4 = FUN_015fd0b8(&local_3c,param_3,param_4);
    if (iVar4 != 0) {
      FUN_01bed4e2(auStack_58,&local_33,0xf);
      FUN_01bed4e2(param_1,(uint)auStack_58 | 3,0xc);
      return;
    }
  } while( true );
}


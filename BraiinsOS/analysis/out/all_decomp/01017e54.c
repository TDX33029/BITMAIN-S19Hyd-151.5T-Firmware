// FUN_01017e54 @ 01017e54 size=1412 calls_out=9 calls_in=0
// strings: assertion failed: sz <= MAX_WINDOW_SIZE as usize | assertion failed: self.window_size.0 >= sz as i32

void FUN_01017e54(undefined2 *param_1,int param_2,int *param_3,int *param_4)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *local_b8;
  code *local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  uint local_2c;
  int local_28;
  
  uVar10 = param_3[2];
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: sz <= MAX_WINDOW_SIZE as usize",0x30,&DAT_0188246c);
  }
  iVar11 = *param_4;
  uVar6 = param_4[1];
  iVar9 = param_4[2];
  uVar2 = *(uint *)(iVar11 + 0x38);
  local_2c = uVar6;
  local_28 = iVar9;
  if (uVar2 <= uVar6) goto LAB_010183ac;
  piVar3 = (int *)(*(int *)(iVar11 + 0x34) + uVar6 * 0xf8);
  iVar5 = *piVar3;
  if ((iVar5 == 3 && piVar3[1] == 0) || (piVar3[0x35] != iVar9)) goto LAB_010183ac;
  uVar7 = (uint)*(byte *)(piVar3 + 8);
  if (uVar7 < 6) {
    uVar2 = 1;
    if (2 < uVar7) {
      uVar2 = uVar7 - 3;
    }
    if ((uVar2 == 0) ||
       ((((uVar2 & 0xff) == 1 && (uVar7 < 2)) && (1 < *(byte *)((int)piVar3 + 0x21)))))
    goto LAB_01017fcc;
    uVar2 = *(uint *)(param_2 + 0x20);
    if ((uVar2 & ~((int)uVar2 >> 0x1f)) < uVar10) goto LAB_01017f88;
    if (uVar10 != 0) {
      if ((int)uVar2 < (int)uVar10) goto LAB_0101838c;
      *(uint *)(param_2 + 0x20) = uVar2 - uVar10;
      if (SBORROW4(*(int *)(param_2 + 0x24),uVar10)) goto LAB_01017f88;
      *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) - uVar10;
    }
    iVar9 = *(int *)(param_2 + 0x7c);
    *(uint *)(param_2 + 0x7c) = uVar10 + iVar9;
    *(int *)(param_2 + 0x7c) = iVar9;
    if (!SCARRY4(*(int *)(param_2 + 0x24),uVar10)) {
      *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + uVar10;
    }
LAB_0101805c:
    *(undefined1 *)param_1 = 3;
    goto LAB_01018064;
  }
  uVar8 = uVar7 - 6;
  if (uVar7 < 6) {
    uVar8 = 6;
  }
  if (uVar8 == 3) {
    if (*(char *)((int)piVar3 + 0x22) == '\0') goto LAB_01017fcc;
LAB_01017f60:
    uVar7 = *(uint *)(param_2 + 0x20);
    if (uVar10 <= (uVar7 & ~((int)uVar7 >> 0x1f))) {
      if (uVar10 != 0) {
        if ((int)uVar7 < (int)uVar10) {
LAB_0101838c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: self.window_size.0 >= sz as i32",0x31,&DAT_01882d2c);
        }
        *(uint *)(param_2 + 0x20) = uVar7 - uVar10;
        if (SBORROW4(*(int *)(param_2 + 0x24),uVar10)) goto LAB_01017f88;
        *(uint *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) - uVar10;
      }
      uVar7 = piVar3[0x12];
      *(uint *)(param_2 + 0x7c) = uVar10 + *(int *)(param_2 + 0x7c);
      if ((uVar7 & ~((int)uVar7 >> 0x1f)) < uVar10) {
        uVar4 = 3;
LAB_01018130:
        uVar1 = 0x100;
        *(int *)(param_1 + 2) = iVar9;
        *(undefined4 *)(param_1 + 4) = uVar4;
        goto LAB_01018000;
      }
      if (iVar5 != 0) {
        if (iVar5 == 2) {
          uVar7 = piVar3[2];
          uVar8 = piVar3[3];
          if (uVar8 == 0 && (uVar10 <= uVar7) <= uVar8) {
LAB_01018120:
            uVar4 = 1;
            goto LAB_01018130;
          }
          piVar3[2] = uVar7 - uVar10;
          uVar2 = *(uint *)(iVar11 + 0x38);
          piVar3[3] = uVar8 - (uVar7 < uVar10);
        }
        else if (uVar10 != 0) goto LAB_01018120;
      }
      if ((*(byte *)(param_3 + 5) & 1) != 0) {
        if (uVar2 <= uVar6) goto LAB_010183ac;
        piVar3 = (int *)(*(int *)(iVar11 + 0x34) + uVar6 * 0xf8);
        if ((*piVar3 == 3 && piVar3[1] == 0) || (piVar3[0x35] != iVar9)) goto LAB_010183ac;
        if ((*piVar3 == 2 && piVar3[1] == 0) && (piVar3[2] != 0 || piVar3[3] != 0)) {
          iVar9 = FUN_0101c55c(param_4);
          uVar4 = *(undefined4 *)(iVar9 + 0xd4);
          *param_1 = 0x100;
          *(undefined4 *)(param_1 + 2) = uVar4;
          *(undefined4 *)(param_1 + 4) = 1;
          goto LAB_01018064;
        }
        iVar5 = FUN_0101c5e8(param_4);
        FUN_0101f510(&local_b8,iVar5 + 0x20);
        if ((char)local_b8 != '\x03') {
          FUN_006f6fa4(&local_b8);
          *(undefined ***)(param_1 + 4) = &PTR_LAB_01882418;
          uVar1 = 0x101;
          *(undefined4 *)(param_1 + 2) = 1;
          *(undefined4 *)(param_1 + 6) = 1;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 10) = 0;
          goto LAB_01018000;
        }
        FUN_006f6fa4(&local_b8);
        uVar2 = *(uint *)(iVar11 + 0x38);
      }
      if (((uVar2 <= uVar6) ||
          (piVar3 = (int *)(*(int *)(iVar11 + 0x34) + uVar6 * 0xf8), *piVar3 == 3 && piVar3[1] == 0)
          ) || (piVar3[0x35] != iVar9)) {
LAB_010183ac:
        local_b4 = FUN_0101a4ac;
        local_b8 = &local_28;
        local_2c = uVar6;
        local_28 = iVar9;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00599806,&local_b8,&DAT_01882550);
      }
      if ((char)piVar3[0x3c] != '\x01') {
        local_b8 = (int *)0x0;
        local_2c = uVar6;
        local_28 = iVar9;
        FUN_010159b4(param_2,uVar10,&local_b8);
        if (local_b8 != (int *)0x0) {
          (*(code *)local_b8[3])(local_b4);
        }
        goto LAB_0101805c;
      }
      local_2c = uVar6;
      local_28 = iVar9;
      iVar9 = FUN_0101c5e8(param_4);
      iVar9 = FUN_01026c08(iVar9 + 0x48,uVar10);
      if (iVar9 == 0) {
        iVar9 = FUN_0101c5e8(param_4);
        *(uint *)(iVar9 + 0xe4) = uVar10 + *(int *)(iVar9 + 0xe4);
        local_b0 = *param_3;
        iStack_ac = param_3[1];
        iStack_a8 = param_3[2];
        iStack_a4 = param_3[3];
        local_b4 = (code *)0x0;
        local_b8 = (int *)0x4;
        iVar9 = FUN_0101c5e8(param_4);
        FUN_0102fe64(iVar9 + 0xb4,param_2 + 100,&local_b8);
        iVar9 = FUN_0101c5e8(param_4);
        iVar11 = *(int *)(iVar9 + 0x50);
        *(undefined4 *)(iVar9 + 0x50) = 0;
        if (iVar11 != 0) {
          (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar9 + 0x54));
        }
        *(undefined1 *)param_1 = 3;
        return;
      }
    }
LAB_01017f88:
    *param_1 = 0x101;
    *(undefined4 *)(param_1 + 2) = 3;
    *(undefined ***)(param_1 + 4) = &PTR_LAB_01882418;
    *(undefined4 *)(param_1 + 6) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  else {
    if (((uVar8 & 0xff) == 4) && (*(char *)((int)piVar3 + 0x21) != '\0')) goto LAB_01017f60;
LAB_01017fcc:
    *(undefined4 *)(param_1 + 2) = 1;
    *(undefined ***)(param_1 + 4) = &PTR_LAB_01882418;
    *(undefined4 *)(param_1 + 6) = 1;
    uVar1 = 0x101;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
LAB_01018000:
    *param_1 = uVar1;
  }
LAB_01018064:
  (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  return;
}


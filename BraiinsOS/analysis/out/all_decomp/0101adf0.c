// FUN_0101adf0 @ 0101adf0 size=384 calls_out=3 calls_in=3
// strings: assertion failed: N::next(&stream).is_none()

void FUN_0101adf0(int *param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  uint uStack_2c;
  uint *puStack_28;
  code *pcStack_24;
  
  if (*param_2 != 1) {
    *param_1 = 0;
    return;
  }
  uVar2 = param_2[1];
  uStack_2c = param_2[2];
  uVar6 = param_2[3];
  bVar9 = uVar2 == uVar6;
  if (bVar9) {
    uVar6 = param_2[4];
  }
  if (bVar9 && uStack_2c == uVar6) {
    uVar6 = *(uint *)(param_3 + 0x38);
    if (uVar2 < uVar6) {
      iVar3 = *(int *)(param_3 + 0x34);
      piVar4 = (int *)(iVar3 + uVar2 * 0xf8);
      if ((*piVar4 != 3 || piVar4[1] != 0) && (piVar4[0x35] == uStack_2c)) {
        if (piVar4[0x24] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: N::next(&stream).is_none()",0x2c,&DAT_018a6b70);
        }
        *param_2 = 0;
        goto LAB_0101aedc;
      }
    }
    puVar1 = &DAT_01882550;
  }
  else {
    uVar6 = *(uint *)(param_3 + 0x38);
    if (uVar2 < uVar6) {
      iVar3 = *(int *)(param_3 + 0x34);
      piVar4 = (int *)(iVar3 + uVar2 * 0xf8);
      if ((*piVar4 != 3 || piVar4[1] != 0) && (piVar4[0x35] == uStack_2c)) {
        uVar5 = piVar4[0x24];
        iVar7 = piVar4[0x25];
        iVar8 = piVar4[0x26];
        piVar4[0x24] = 0;
        if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a6b60);
        }
        *param_2 = 1;
        param_2[1] = iVar7;
        param_2[2] = iVar8;
LAB_0101aedc:
        if (uVar2 < uVar6) {
          *param_1 = param_3;
          param_1[1] = uVar2;
          param_1[2] = uStack_2c;
          *(undefined1 *)(iVar3 + uVar2 * 0xf8 + 0xee) = 0;
          return;
        }
      }
    }
    puVar1 = &DAT_01882560;
  }
  puStack_28 = &uStack_2c;
  pcStack_24 = FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&puStack_28,puVar1);
}


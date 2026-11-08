// FUN_0166df74 @ 0166df74 size=536 calls_out=7 calls_in=1
// strings: attempt to join into collection with len > usize::MAX

void FUN_0166df74(uint *param_1,uint *param_2,int param_3,undefined2 *param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  iVar3 = param_3 * 8;
  puVar7 = param_2 + 2;
  uVar8 = param_5 * (iVar3 - 8U >> 3);
  puVar6 = param_2;
  while (iVar3 != 0) {
    puVar1 = puVar6 + 1;
    iVar3 = iVar3 + -8;
    puVar6 = puVar6 + 2;
    bVar12 = CARRY4(*puVar1,uVar8);
    uVar8 = *puVar1 + uVar8;
    if (bVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
    }
  }
  if (0x7fffffff < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  if (uVar8 == 0) {
    local_2c = 1;
  }
  else {
    local_2c = thunk_FUN_016d4a50(uVar8);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar8);
    }
  }
  uVar9 = *param_2;
  uVar11 = param_2[1];
  local_28 = 0;
  local_30 = uVar8;
  if (uVar8 < uVar11) {
    FUN_0166e728(&local_30,0,uVar11,1,1);
  }
  uVar10 = local_28;
  uVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar9,uVar11);
  uVar4 = uVar8 - (uVar10 + uVar11);
  puVar5 = (undefined2 *)(uVar2 + uVar10 + uVar11);
  if (param_5 == 2) {
    if (param_3 != 1) {
      do {
        if (uVar4 >= 2) {
          uVar10 = *puVar7;
          uVar11 = puVar7[1];
          uVar9 = uVar4 - 2;
          *puVar5 = *param_4;
        }
        if (uVar4 < 2 || uVar9 < uVar11) goto LAB_0166e140;
        FUN_016dd1aa(puVar5 + 1,uVar10,uVar11);
        puVar7 = puVar7 + 2;
        uVar4 = uVar9 - uVar11;
        puVar5 = (undefined2 *)((int)(puVar5 + 1) + uVar11);
      } while (puVar7 != param_2 + param_3 * 2);
    }
  }
  else if (param_3 != 1) {
    do {
      if (uVar4 == 0) {
LAB_0166e140:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
      }
      uVar9 = *puVar7;
      uVar11 = puVar7[1];
      *(undefined1 *)puVar5 = *(undefined1 *)param_4;
      if (uVar4 - 1 < uVar11) goto LAB_0166e140;
      FUN_016dd1aa((undefined1 *)((int)puVar5 + 1),uVar9,uVar11);
      puVar7 = puVar7 + 2;
      uVar4 = (uVar4 - 1) - uVar11;
      puVar5 = (undefined2 *)((undefined1 *)((int)puVar5 + 1) + uVar11);
    } while (puVar7 != param_2 + param_3 * 2);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar8 - uVar4;
  return;
}


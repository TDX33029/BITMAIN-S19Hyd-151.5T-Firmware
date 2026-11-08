// FUN_01343b30 @ 01343b30 size=580 calls_out=8 calls_in=2
// strings: 

undefined4 FUN_01343b30(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 *local_54 [10];
  undefined4 *local_2c;
  undefined4 *local_28;
  
  local_28 = param_3 + param_4 * 2;
  local_54[0] = &DAT_00110000;
  local_7c = &DAT_00110000;
  uVar3 = 0;
  local_2c = param_3;
LAB_01343b7c:
  do {
    while( true ) {
      uVar9 = FUN_01343d84(&local_7c);
      if ((int)uVar9 != 0) break;
      puVar1 = (undefined4 *)((ulonglong)uVar9 >> 0x20);
      if (local_2c != (undefined4 *)0x0) {
        puVar1 = local_28;
      }
      if (!(local_2c != (undefined4 *)0x0 && local_2c != puVar1)) {
        uVar9 = FUN_01343d84(local_54);
        if ((int)uVar9 == 0) {
          return uVar3;
        }
        break;
      }
      local_78 = *local_2c;
      uStack_74 = local_2c[1];
      local_2c = local_2c + 2;
      local_58 = 0;
      local_60 = 0;
      local_64 = 1;
      local_68 = 0x2f;
      local_7c = (undefined1 *)0x2f;
      uStack_70 = 0;
      local_6c = uStack_74;
      local_5c = uStack_74;
    }
    uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
    iVar8 = (int)uVar9;
    if (uVar4 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      if (*(char *)(uVar4 + iVar8 + -1) == '/') {
        iVar6 = iVar8;
      }
    }
    if (iVar6 != 0) {
      uVar9 = CONCAT44(uVar4 - 1,iVar6);
    }
    cVar2 = FUN_01343f04((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
  } while (cVar2 == '\0');
  if (cVar2 == '\x01') {
    uVar7 = param_1[2];
    if (uVar7 <= param_2 + 1U) {
      uVar3 = 1;
      goto LAB_01343b7c;
    }
    iVar8 = param_1[1];
    uVar5 = uVar7 - 1;
    uVar4 = uVar5;
    if (*(char *)(iVar8 + uVar5) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar8,uVar7,0,uVar5,&DAT_01ce6a0c);
    }
    while( true ) {
      uVar10 = FUN_01307268(0x2f,iVar8,uVar4);
      uVar4 = (uint)(uVar10 >> 0x20);
      if ((uVar10 & 1) == 0) goto LAB_01343d48;
      if ((uVar4 < uVar5) && (*(char *)(iVar8 + uVar4) == '/')) break;
      if (uVar5 < uVar4) {
LAB_01343d48:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01ce6a1c);
      }
    }
    if (uVar7 <= uVar4) goto LAB_01343b7c;
    uVar4 = uVar4 + 1;
    if ((uVar4 < uVar7) && (*(char *)(iVar8 + uVar4) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01ce6a2c);
    }
  }
  else {
    iVar6 = param_1[2];
    if ((uint)(*param_1 - iVar6) < uVar4) {
      FUN_006520b4(param_1,iVar6,uVar4,1,1);
      iVar6 = param_1[2];
    }
    FUN_01bed4e2(param_1[1] + iVar6,iVar8,uVar4);
    uVar4 = iVar6 + uVar4;
  }
  param_1[2] = uVar4;
  goto LAB_01343b7c;
}


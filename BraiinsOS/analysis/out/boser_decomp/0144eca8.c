// FUN_0144eca8 @ 0144eca8 size=324 calls_out=5 calls_in=2
// strings: assertion failed: new_cap >= len

undefined8 FUN_0144eca8(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint unaff_r8;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar1 = param_1[0x3c];
  if (uVar1 < 0x3c) {
    puVar6 = param_1 + 1;
    uVar4 = 0x3b;
    uVar5 = uVar1;
  }
  else {
    puVar6 = (undefined4 *)param_1[2];
    uVar4 = uVar1;
    uVar5 = param_1[1];
  }
  if (param_2 < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: new_cap >= len",0x20,&DAT_01d2ec08);
  }
  uVar3 = 0x80000001;
  if (param_2 < 0x3c) {
    if (0x3b < uVar1) {
      *param_1 = 0;
      FUN_01bed4e2(param_1 + 1,puVar6,uVar5 << 2);
      param_1[0x3c] = uVar5;
      FUN_0144ea44(puVar6,uVar4);
    }
  }
  else if (param_2 != uVar4) {
    unaff_r8 = param_2 * 4;
    uVar3 = 0;
    if ((param_2 < 0x40000000) && (unaff_r8 < 0x7ffffffd)) {
      if (uVar1 < 0x3c) {
        uVar3 = 4;
        iVar2 = FUN_01298504(unaff_r8,4);
        if (iVar2 == 0) goto LAB_0144ed28;
        FUN_01bed4e2(iVar2,puVar6,uVar5 << 2);
      }
      else {
        uVar1 = uVar4 * 4;
        if (0x3fffffff < uVar4) {
          unaff_r8 = uVar1;
          goto LAB_0144ed28;
        }
        if (0x7ffffffc < uVar1) goto LAB_0144ed28;
        uVar3 = 4;
        iVar2 = FUN_01298554(puVar6,uVar1,4,unaff_r8);
        if (iVar2 == 0) goto LAB_0144ed28;
      }
      uVar3 = 0x80000001;
      param_1[0x3c] = param_2;
      *param_1 = 1;
      param_1[1] = uVar5;
      param_1[2] = iVar2;
    }
  }
LAB_0144ed28:
  return CONCAT44(unaff_r8,uVar3);
}


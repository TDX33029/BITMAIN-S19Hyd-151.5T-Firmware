// FUN_018eb874 @ 018eb874 size=88 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_018eb874(char *param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 unaff_r7;
  
  uVar2 = 0;
  if (param_2 != 0) {
    param_2 = param_2 * 0x14;
    do {
      sVar1 = FUN_018eb4c8(param_1);
      if (sVar1 == 0xb) {
        if (*param_1 == '\0') {
          uVar2 = *(undefined4 *)(param_1 + 8);
          unaff_r7 = *(undefined4 *)(param_1 + 0xc);
        }
        break;
      }
      param_1 = param_1 + 0x14;
      param_2 = param_2 + -0x14;
    } while (param_2 != 0);
  }
  return CONCAT44(unaff_r7,uVar2);
}


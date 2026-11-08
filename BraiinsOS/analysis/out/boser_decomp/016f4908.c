// FUN_016f4908 @ 016f4908 size=452 calls_out=7 calls_in=1
// strings: Decimal_NumberWhite_SpaceASCII_Hex_Digit0

void FUN_016f4908(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  int local_38;
  undefined1 local_34;
  int local_28;
  undefined1 local_24;
  undefined1 auStack_23 [11];
  
  piVar6 = &local_38;
  if (param_3 < 8) {
    if (param_3 == 3) {
      iVar1 = thunk_FUN_01bed842(param_2,&DAT_004ea23d,3);
      if (iVar1 != 0) goto LAB_016f49f8;
      pcVar2 = "";
    }
    else {
      if ((param_3 != 5) || (iVar1 = thunk_FUN_01bed842(param_2,&DAT_004ea238,5), iVar1 != 0))
      goto LAB_016f49f8;
      pcVar2 = "";
    }
    pcVar3 = pcVar2 + 8;
LAB_016f49c0:
    FUN_016e4448(&local_28,pcVar2,pcVar3);
    FUN_016f68e8(param_1,&local_28);
    return;
  }
  if (param_3 == 8) {
    iVar1 = thunk_FUN_01bed842(param_2,&DAT_0056fd68,8);
    if (iVar1 == 0) {
      FUN_016f4908(&local_28,&DAT_004e936d,10);
      if (local_28 == -0x80000000) {
        *(undefined1 *)(param_1 + 1) = local_24;
        *param_1 = -0x80000000;
        return;
      }
      FUN_01bed4e2((uint)&local_38 | 5,auStack_23,0xb);
      local_34 = local_24;
      local_38 = local_28;
      FUN_016df9f4(&local_38);
      goto LAB_016f4abc;
    }
  }
  else if ((param_3 == 0xe) &&
          (iVar1 = thunk_FUN_01bed842(param_2,"Decimal_NumberWhite_SpaceASCII_Hex_Digit0",0xe),
          iVar1 == 0)) {
    pcVar2 = "0";
    pcVar3 = "\t";
    goto LAB_016f49c0;
  }
LAB_016f49f8:
  uVar7 = FUN_016f486c(&DAT_01d17ab8,0x25,param_2,param_3);
  iVar1 = (int)uVar7;
  if (iVar1 != 0) {
    FUN_016e4448(&local_38,iVar1,iVar1 + (int)((ulonglong)uVar7 >> 0x20) * 8);
    piVar6 = &local_28;
    FUN_016f68e8(piVar6,&local_38);
    if (local_28 != -0x80000000) {
LAB_016f4abc:
      iVar1 = piVar6[1];
      iVar4 = piVar6[2];
      iVar5 = piVar6[3];
      *param_1 = *piVar6;
      param_1[1] = iVar1;
      param_1[2] = iVar4;
      param_1[3] = iVar5;
      return;
    }
  }
  *param_1 = -0x80000000;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}


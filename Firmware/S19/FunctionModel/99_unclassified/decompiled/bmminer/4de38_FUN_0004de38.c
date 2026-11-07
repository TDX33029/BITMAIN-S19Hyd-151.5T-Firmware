// FUN_0004de38 @ 0004de38  size=268  callers=2
// program: bmminer


undefined4 FUN_0004de38(int param_1)

{
  uint in_fpscr;
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  switch(DAT_0050fac0) {
  case 0x22:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = SUB84((1215.89444 - dVar3) / 59.931507,0);
    break;
  default:
    uVar1 = 0;
    break;
  case 0x41:
  case 0x42:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    return SUB84((765.411764 - dVar3) / 35.833333,0);
  case 0x43:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = SUB84((933.240365 - dVar3) / 59.806034,0);
    break;
  case 0x61:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = SUB84((1144.502262 - dVar3) / 52.243589,0);
    break;
  case 0x62:
  case 100:
  case 0x65:
  case 0x66:
    uVar2 = VectorSignedToFloat(-param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = (undefined4)uVar2;
    break;
  case 0x71:
  case 0x72:
  case 0x75:
  case 0x77:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = SUB84((1190.935338 - dVar3) / 78.742588,0);
    break;
  case 0x73:
  case 0x78:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = SUB84((1280.577821 - dVar3) / 73.979365,0);
    break;
  case 0x74:
  case 0x76:
    dVar3 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    uVar1 = SUB84((1156.107585 - dVar3) / 76.090494,0);
  }
  return uVar1;
}


// FUN_00076390 @ 00076390  size=580  callers=3
// program: bmminer


undefined4 FUN_00076390(int param_1)

{
  uint in_fpscr;
  undefined8 uVar1;
  double dVar2;
  undefined4 local_10;
  
  switch(DAT_009451f8) {
  case 0x1a:
  case 0x62:
  case 100:
  case 0x65:
  case 0x66:
    uVar1 = VectorSignedToFloat(-param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = (undefined4)uVar1;
    break;
  default:
    local_10 = 0;
    break;
  case 0x22:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((1215.89444 - dVar2) / 59.931507,0);
    break;
  case 0x41:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((765.411764 - dVar2) / 35.833333,0);
    break;
  case 0x42:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((765.411764 - dVar2) / 35.833333,0);
    break;
  case 0x43:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((933.240365 - dVar2) / 59.806034,0);
    break;
  case 0x61:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((1144.502262 - dVar2) / 52.243589,0);
    break;
  case 0x71:
  case 0x75:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((1190.935338 - dVar2) / 78.742588,0);
    break;
  case 0x72:
  case 0x77:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((1190.935338 - dVar2) / 78.742588,0);
    break;
  case 0x73:
  case 0x78:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((1280.577821 - dVar2) / 73.979365,0);
    break;
  case 0x74:
  case 0x76:
    dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
    local_10 = SUB84((1156.107585 - dVar2) / 76.090494,0);
    break;
  case 0xc1:
  case 0xc2:
    if ((DAT_009451fc == 0x80000300) || ((DAT_009451fc & 0xff) < 4)) {
      dVar2 = (double)VectorSignedToFloat(0x4fb - param_1,(byte)(in_fpscr >> 0x16) & 3);
      local_10 = SUB84(dVar2 / 85.0,0);
    }
    else {
      dVar2 = (double)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x16) & 3);
      local_10 = SUB84((1083.75 - dVar2) / 70.83333333333,0);
    }
  }
  return local_10;
}


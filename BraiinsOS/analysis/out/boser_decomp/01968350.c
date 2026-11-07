// FUN_01968350 @ 01968350 size=492 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_01968350(int *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  short local_38 [2];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  
  do {
    while( true ) {
      FUN_0196856c(param_1);
      uVar5 = param_1[1];
      uVar4 = param_1[2];
      if (uVar4 == uVar5) {
        local_30 = 4;
        goto LAB_01968518;
      }
      if (uVar5 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar4,uVar5,&DAT_01d27354);
      }
      if (*(char *)(*param_1 + uVar4) != '\\') {
        if (*(char *)(*param_1 + uVar4) == '\"') {
          param_1[2] = uVar4 + 1;
          return 0;
        }
        local_30 = 0x10;
        goto LAB_01968518;
      }
      param_1[2] = uVar4 + 1;
      FUN_01967918(&local_30,param_1);
      if ((char)local_30 == '\x01') {
        return local_2c;
      }
      uVar4 = local_30 >> 8 & 0xff;
      if (0x61 < uVar4) break;
      if ((uVar4 != 0x22 && uVar4 != 0x2f) && (uVar4 != 0x5c)) goto switchD_01968400_caseD_6f;
    }
    switch(uVar4) {
    case 0x6e:
    case 0x72:
    case 0x74:
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
switchD_01968400_caseD_6f:
      local_30 = 0xc;
LAB_01968518:
      uVar3 = FUN_01967db4(param_1,&local_30);
      return uVar3;
    case 0x75:
      uVar5 = param_1[1];
      uVar4 = param_1[2];
      if (uVar5 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar4,uVar5,uVar5,&DAT_01d27364);
      }
      if (uVar5 - uVar4 < 4) {
        param_1[2] = uVar5;
        local_30 = 4;
LAB_019684cc:
        FUN_019681e4(local_38,param_1,&local_30);
      }
      else {
        pbVar2 = (byte *)(*param_1 + uVar4);
        bVar1 = *pbVar2;
        param_1[2] = uVar4 + 4;
        if ((short)(*(ushort *)(&DAT_00525416 + (uint)pbVar2[1] * 2) |
                    *(ushort *)(&DAT_00525616 + (uint)bVar1 * 2) |
                    *(ushort *)(&DAT_00525616 + (uint)pbVar2[2] * 2) |
                   *(ushort *)(&DAT_00525416 + (uint)pbVar2[3] * 2)) < 0) {
          local_30 = 0xc;
          goto LAB_019684cc;
        }
        local_38[0] = 0;
      }
      if (local_38[0] == 1) {
        return local_34;
      }
      break;
    default:
      if (uVar4 != 0x62 && uVar4 != 0x66) goto switchD_01968400_caseD_6f;
    }
  } while( true );
}


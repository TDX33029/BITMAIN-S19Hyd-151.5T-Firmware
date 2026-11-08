// FUN_0168bf40 @ 0168bf40 size=1028 calls_out=3 calls_in=2
// strings: 

void FUN_0168bf40(int param_1,undefined1 param_2,byte *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x130);
  uVar6 = (uint)*(byte *)(param_1 + 0x158);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 1:
    if ((uVar5 & 0x3ffc0) == 0) {
      return;
    }
LAB_0168c154:
    if (param_4 != 0) {
      *param_3 = *param_3 | 4;
      return;
    }
    puVar4 = &DAT_01d078ac;
    goto LAB_0168c170;
  case 2:
    if ((uVar5 & 3) == 0) {
LAB_0168c058:
      if ((uVar5 & 0x3c) == 0) break;
      uVar1 = FUN_0168b50c(param_3,param_4);
      if (param_4 == 0) goto LAB_0168c2f0;
      if (param_4 != 1) {
        bVar3 = (byte)uVar1 | 0x14;
        goto LAB_0168c254;
      }
    }
    else {
      uVar1 = FUN_0168b50c(param_3,param_4);
      if (param_4 == 0) goto LAB_0168c2f0;
      uVar6 = param_4 - 1;
      if (param_4 != 1) {
        param_3[1] = (byte)uVar1 | 1;
        if (uVar6 == 1) goto LAB_0168c314;
        param_3[2] = (byte)((uint)uVar1 >> 8);
        if (uVar6 < 3) goto LAB_0168c328;
        param_3[3] = (byte)((uint)uVar1 >> 0x10);
        if (uVar6 == 3) goto LAB_0168c33c;
        param_3[4] = (byte)((uint)uVar1 >> 0x18);
        goto LAB_0168c058;
      }
    }
    goto LAB_0168c308;
  case 3:
    if (*(char *)(param_1 + 0x15c) == '\0') {
      if ((uVar5 & 0x3c) != 0) {
        uVar1 = FUN_0168b50c(param_3,param_4);
        if (param_4 == 0) goto LAB_0168c2f0;
        if (param_4 == 1) goto LAB_0168c308;
        bVar3 = (byte)uVar1 | 0x10;
        goto LAB_0168c1a4;
      }
    }
    else {
      if ((uVar5 & 0x30) != 0) {
        if (param_4 == 0) {
LAB_0168c350:
          puVar4 = &DAT_01d078bc;
          goto LAB_0168c170;
        }
        *param_3 = *param_3 | 8;
      }
      if ((uVar5 & 0x3c) != 0) {
        uVar1 = FUN_0168b50c(param_3,param_4);
        if (param_4 == 0) goto LAB_0168c2f0;
        if (param_4 == 1) goto LAB_0168c308;
        bVar3 = (byte)uVar1 | 4;
LAB_0168c1a4:
        uVar2 = param_4 - 1;
        param_3[1] = bVar3;
        if (uVar2 == 1) goto LAB_0168c314;
        param_3[2] = (byte)((uint)uVar1 >> 8);
        if (uVar2 < 3) goto LAB_0168c328;
        param_3[3] = (byte)((uint)uVar1 >> 0x10);
        if (uVar2 == 3) goto LAB_0168c33c;
        param_3[4] = (byte)((uint)uVar1 >> 0x18);
        if (uVar6 == 10) {
          uVar1 = FUN_0168b50c(param_3,param_4);
          param_3[1] = (byte)uVar1 | 4;
          param_3[4] = (byte)((uint)uVar1 >> 0x18);
          param_3[3] = (byte)((uint)uVar1 >> 0x10);
          param_3[2] = (byte)((uint)uVar1 >> 8);
        }
      }
    }
    break;
  case 4:
    if ((uVar5 & 0x30) != 0) {
      if (*(char *)(param_1 + 0x15c) == '\0') {
        if (param_4 == 0) goto LAB_0168c350;
        *param_3 = *param_3 | 8;
      }
      else {
        uVar1 = FUN_0168b50c(param_3,param_4);
        if (param_4 == 0) goto LAB_0168c2f0;
        uVar2 = param_4 - 1;
        if (param_4 == 1) goto LAB_0168c308;
        param_3[1] = (byte)uVar1 | 0x10;
        if (uVar2 == 1) goto LAB_0168c314;
        param_3[2] = (byte)((uint)uVar1 >> 8);
        if (uVar2 < 3) goto LAB_0168c328;
        param_3[3] = (byte)((uint)uVar1 >> 0x10);
        if (uVar2 == 3) goto LAB_0168c33c;
        param_3[4] = (byte)((uint)uVar1 >> 0x18);
      }
    }
    if ((uVar6 == 0xd) && ((uVar5 & 0x3c) != 0)) {
      uVar1 = FUN_0168b50c(param_3,param_4);
      if (param_4 == 0) goto LAB_0168c2f0;
      if (param_4 == 1) goto LAB_0168c308;
      bVar3 = (byte)uVar1 | 4;
LAB_0168c254:
      uVar6 = param_4 - 1;
      param_3[1] = bVar3;
      if (uVar6 == 1) goto LAB_0168c314;
      param_3[2] = (byte)((uint)uVar1 >> 8);
      if (uVar6 < 3) goto LAB_0168c328;
      param_3[3] = (byte)((uint)uVar1 >> 0x10);
      if (uVar6 == 3) goto LAB_0168c33c;
      param_3[4] = (byte)((uint)uVar1 >> 0x18);
    }
    break;
  case 5:
    if ((uVar5 & 0x3c) != 0) {
      uVar1 = FUN_0168b50c(param_3,param_4);
      if (param_4 == 0) goto LAB_0168c2f0;
      uVar2 = param_4 - 1;
      if (param_4 == 1) goto LAB_0168c308;
      param_3[1] = (byte)uVar1 | 4;
      if (uVar2 == 1) goto LAB_0168c314;
      param_3[2] = (byte)((uint)uVar1 >> 8);
      if (uVar2 < 3) goto LAB_0168c328;
      param_3[3] = (byte)((uint)uVar1 >> 0x10);
      if (uVar2 == 3) goto LAB_0168c33c;
      param_3[4] = (byte)((uint)uVar1 >> 0x18);
    }
    if ((uVar5 & 0x3ffc0) == 0) {
      return;
    }
    if (""[uVar6] != '\0') goto LAB_0168c154;
    goto LAB_0168c298;
  }
  if ((uVar5 & 0x3ffc0) == 0) {
    return;
  }
LAB_0168c298:
  uVar5 = FUN_0168b50c(param_3,param_4);
  if (param_4 == 0) {
LAB_0168c2f0:
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(1,0,0,&DAT_01d0788c);
  }
  uVar6 = param_4 - 1;
  if (param_4 != 1) {
    param_3[1] = (byte)uVar5;
    if (uVar6 != 1) {
      param_3[2] = (byte)((uVar5 | 0x14000) >> 8);
      if (2 < uVar6) {
        param_3[3] = (byte)((uVar5 | 0x14000) >> 0x10);
        if (uVar6 != 3) {
          param_3[4] = (byte)(uVar5 >> 0x18);
          return;
        }
LAB_0168c33c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(3,3,&DAT_01d0793c);
      }
LAB_0168c328:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(2,2,&DAT_01d0792c);
    }
LAB_0168c314:
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,1,&DAT_01d0791c);
  }
LAB_0168c308:
  puVar4 = &DAT_01d0790c;
LAB_0168c170:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(0,0,puVar4);
}


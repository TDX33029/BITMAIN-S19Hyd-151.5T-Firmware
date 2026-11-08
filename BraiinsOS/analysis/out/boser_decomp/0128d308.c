// FUN_0128d308 @ 0128d308 size=428 calls_out=1 calls_in=1
// strings: 

void FUN_0128d308(undefined4 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 in_r12;
  byte bVar3;
  
  if (param_3 < 3) {
    *param_1 = 0;
    uVar1 = 4;
    goto LAB_0128d4a0;
  }
  if ((*param_2 | 0x20) - 0x61 < 0x13) {
    bVar3 = param_2[2] | 0x20;
    bVar2 = param_2[1] | 0x20;
    switch(*param_2 | 0x20) {
    case 0x61:
      if (bVar2 == 0x70) {
        in_r12 = 3;
        if (bVar3 == 0x72) goto LAB_0128d4b8;
      }
      else if ((bVar2 == 0x75) && (in_r12 = 7, bVar3 == 0x67)) goto LAB_0128d4b8;
      break;
    case 100:
      if (bVar2 == 0x65) {
        in_r12 = 0xb;
      }
      if (bVar2 == 0x65 && bVar3 == 99) goto LAB_0128d4b8;
      break;
    case 0x66:
      if ((bVar2 == 0x65) && (in_r12 = 1, bVar3 == 0x62)) goto LAB_0128d4b8;
      break;
    case 0x6a:
      if (bVar2 == 0x61) {
        in_r12 = 0;
      }
      else {
        if (bVar2 != 0x75) break;
        if (bVar3 == 0x6c) {
          in_r12 = 6;
          goto LAB_0128d4b8;
        }
        in_r12 = 5;
      }
      if (bVar3 == 0x6e) {
LAB_0128d4b8:
        if ((param_3 != 3) && ((char)param_2[3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(param_2,param_3,3,param_3,&DAT_01c26228);
        }
        *(undefined1 *)(param_1 + 2) = in_r12;
        *param_1 = param_2 + 3;
        param_1[1] = param_3 - 3;
        return;
      }
      break;
    case 0x6d:
      if (bVar2 == 0x61) {
        if (bVar3 == 0x72) {
          in_r12 = 2;
          goto LAB_0128d4b8;
        }
        if (bVar3 == 0x79) {
          in_r12 = 4;
          goto LAB_0128d4b8;
        }
      }
      break;
    case 0x6e:
      if (bVar2 == 0x6f) {
        in_r12 = 10;
      }
      if (bVar2 == 0x6f && bVar3 == 0x76) goto LAB_0128d4b8;
      break;
    case 0x6f:
      if ((bVar2 == 99) && (in_r12 = 9, bVar3 == 0x74)) goto LAB_0128d4b8;
      break;
    case 0x73:
      if ((bVar2 == 0x65) && (in_r12 = 8, bVar3 == 0x70)) goto LAB_0128d4b8;
    }
  }
  *param_1 = 0;
  uVar1 = 3;
LAB_0128d4a0:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


// FUN_00f69e24 @ 00f69e24 size=336 calls_out=1 calls_in=1
// strings: 

void FUN_00f69e24(undefined4 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  
  if (param_3 < 3) {
    uVar1 = 4;
    goto LAB_00f69f78;
  }
  if ((*param_2 | 0x20) - 0x66 < 0x12) {
    bVar3 = param_2[2] | 0x20;
    bVar2 = param_2[1] | 0x20;
    switch(*param_2 | 0x20) {
    case 0x66:
      bVar4 = bVar2 == 0x72;
      if (bVar4) {
        bVar2 = 4;
      }
      if (bVar4 && bVar3 == 0x69) goto LAB_00f69f38;
      break;
    case 0x6d:
      if (bVar2 == 0x6f) {
        bVar2 = 0;
joined_r0x00f69ee4:
        if (bVar3 == 0x6e) {
LAB_00f69f38:
          if ((param_3 != 3) && ((char)param_2[3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa8ac(param_2,param_3,3,param_3,&DAT_0188009c);
          }
          *param_1 = param_2 + 3;
          param_1[1] = param_3 - 3;
          *(byte *)(param_1 + 2) = bVar2;
          return;
        }
      }
      break;
    case 0x73:
      if (bVar2 == 0x61) {
        bVar2 = 5;
        if (bVar3 == 0x74) goto LAB_00f69f38;
      }
      else if (bVar2 == 0x75) {
        bVar2 = 6;
        goto joined_r0x00f69ee4;
      }
      break;
    case 0x74:
      if (bVar2 == 0x68) {
        bVar2 = 3;
        if (bVar3 == 0x75) goto LAB_00f69f38;
      }
      else if ((bVar2 == 0x75) && (bVar2 = 1, bVar3 == 0x65)) goto LAB_00f69f38;
      break;
    case 0x77:
      if ((bVar2 == 0x65) && (bVar2 = 2, bVar3 == 100)) goto LAB_00f69f38;
    }
  }
  uVar1 = 3;
LAB_00f69f78:
  *(undefined1 *)param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 7;
  return;
}


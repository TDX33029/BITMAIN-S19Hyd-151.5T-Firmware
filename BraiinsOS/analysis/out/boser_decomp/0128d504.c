// FUN_0128d504 @ 0128d504 size=336 calls_out=1 calls_in=1
// strings: 

void FUN_0128d504(undefined4 *param_1,byte *param_2,uint param_3)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  
  if (param_3 < 3) {
    uVar1 = 4;
  }
  else {
    bVar2 = param_2[1] | 0x20;
    bVar4 = param_2[2] | 0x20;
    bVar3 = *param_2 | 0x20;
    if (bVar3 < 0x73) {
      if (bVar3 == 0x66) {
        bVar5 = bVar2 == 0x72;
        if (bVar5) {
          bVar2 = 4;
        }
        if (bVar5 && bVar4 == 0x69) goto LAB_0128d5c4;
      }
      else if (bVar3 == 0x6d && bVar2 == 0x6f) {
        bVar2 = 0;
LAB_0128d59c:
        if (bVar4 == 0x6e) goto LAB_0128d5c4;
      }
    }
    else if (bVar3 == 0x73) {
      if (bVar2 == 0x61) {
        bVar2 = 5;
        if (bVar4 == 0x74) goto LAB_0128d5c4;
      }
      else if (bVar2 == 0x75) {
        bVar2 = 6;
        goto LAB_0128d59c;
      }
    }
    else if (bVar3 == 0x74) {
      if (bVar2 == 0x68) {
        bVar2 = 3;
        if (bVar4 == 0x75) goto LAB_0128d5c4;
      }
      else if ((bVar2 == 0x75) && (bVar2 = 1, bVar4 == 0x65)) {
LAB_0128d5c4:
        if ((param_3 != 3) && ((char)param_2[3] < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(param_2,param_3,3,param_3,&DAT_01c26238);
        }
        *param_1 = param_2 + 3;
        param_1[1] = param_3 - 3;
        goto LAB_0128d608;
      }
    }
    else if ((bVar3 == 0x77 && bVar2 == 0x65) && (bVar2 = 2, bVar4 == 100)) goto LAB_0128d5c4;
    uVar1 = 3;
  }
  *(undefined1 *)param_1 = uVar1;
  bVar2 = 7;
LAB_0128d608:
  *(byte *)(param_1 + 2) = bVar2;
  return;
}


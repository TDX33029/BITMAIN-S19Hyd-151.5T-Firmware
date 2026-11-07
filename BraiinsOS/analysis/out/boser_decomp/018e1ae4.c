// FUN_018e1ae4 @ 018e1ae4 size=228 calls_out=2 calls_in=2
// strings: 

void FUN_018e1ae4(undefined4 param_1,undefined4 param_2,char *param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (*param_3 == '\n') {
    uVar6 = 8;
    switch(*(undefined4 *)(param_3 + 4)) {
    case 0:
    case 4:
    case 7:
      break;
    case 1:
    case 2:
      uVar6 = 0xb;
      break;
    case 3:
      uVar6 = 10;
      break;
    case 5:
      uVar6 = 0xe;
      break;
    case 6:
      uVar6 = 0x11;
      break;
    case 8:
      uVar6 = 9;
      break;
    case 9:
      uVar6 = 0xf;
      break;
    default:
      piVar3 = *(int **)(param_3 + 8);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + 1;
      if (iVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x18e1bf0);
        (*pcVar1)();
      }
      uVar5 = *(undefined4 *)(param_3 + 0xc);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      uVar6 = 0xc;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_018531c0(piVar3,uVar5);
      }
    }
  }
  else {
    uVar6 = 6;
    if (*param_3 == '\b') {
      uVar6 = 0xd;
    }
  }
  FUN_018e0700(param_1,param_2,uVar6,param_3);
  return;
}


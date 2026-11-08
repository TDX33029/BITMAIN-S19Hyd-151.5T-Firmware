// FUN_0157d9a4 @ 0157d9a4 size=404 calls_out=1 calls_in=13
// strings: 

undefined8 FUN_0157d9a4(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_3,param_2,&DAT_018a94b4);
  }
  iVar1 = 0;
  if (param_3 != 0) {
    pcVar2 = param_1 + param_3;
    if (param_3 < 4) {
      do {
        if (pcVar2 <= param_1) goto LAB_0157dad0;
        pcVar2 = pcVar2 + -1;
      } while (*pcVar2 != '\n');
    }
    else if ((~(0x1010100 - (*(uint *)(pcVar2 + -4) ^ 0xa0a0a0a) | *(uint *)(pcVar2 + -4)) &
             0x80808080) == 0) {
      iVar3 = param_3 - ((uint)pcVar2 & 3);
      if (param_3 < 9) {
        pcVar2 = param_1 + iVar3;
        do {
          if (pcVar2 <= param_1) goto LAB_0157dad0;
          pcVar2 = pcVar2 + -1;
        } while (*pcVar2 != '\n');
      }
      else {
        do {
          if ((iVar3 < 8) ||
             (pcVar2 = param_1 + iVar3,
             (~(0x1010100 - (*(uint *)(pcVar2 + -8) ^ 0xa0a0a0a) | *(uint *)(pcVar2 + -8)) &
             0x80808080) != 0)) {
            pcVar2 = param_1 + iVar3;
            break;
          }
          iVar3 = iVar3 + -8;
        } while ((~(0x1010100 - (*(uint *)(pcVar2 + -4) ^ 0xa0a0a0a) | *(uint *)(pcVar2 + -4)) &
                 0x80808080) == 0);
        do {
          if (pcVar2 <= param_1) goto LAB_0157dad0;
          pcVar2 = pcVar2 + -1;
        } while (*pcVar2 != '\n');
      }
    }
    else {
      do {
        if (pcVar2 <= param_1) goto LAB_0157dad0;
        pcVar2 = pcVar2 + -1;
      } while (*pcVar2 != '\n');
    }
    iVar1 = ((int)pcVar2 - (int)param_1) + 1;
    if (param_2 <= (uint)((int)pcVar2 - (int)param_1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,iVar1,param_2,&DAT_018a94a4);
    }
  }
LAB_0157dad0:
  iVar3 = 1;
  if (param_1 < param_1 + iVar1) {
    iVar3 = 0;
    iVar4 = iVar1;
    do {
      if (*param_1 == '\n') {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + -1;
      param_1 = param_1 + 1;
    } while (iVar4 != 0);
    iVar3 = iVar3 + 1;
  }
  return CONCAT44(param_3 - iVar1,iVar3);
}


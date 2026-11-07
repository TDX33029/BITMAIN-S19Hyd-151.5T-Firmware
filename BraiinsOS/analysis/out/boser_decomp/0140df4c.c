// FUN_0140df4c @ 0140df4c size=204 calls_out=2 calls_in=7
// strings: 

void FUN_0140df4c(int *param_1,int param_2,uint param_3,char *param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  
  cVar5 = '\x03';
  if (param_3 != 0) {
    if (param_3 < 0x41) {
      uVar4 = 0;
      do {
        param_4[uVar4] = *(char *)(param_5 + (uint)*(byte *)(param_2 + uVar4));
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
      cVar1 = FUN_0140e018(param_4,param_3);
      if (cVar1 == 'Q') {
        if (param_3 < 8) {
          pcVar2 = param_4;
          uVar4 = param_3;
          do {
            if (*pcVar2 == '\0') goto LAB_0140e010;
            uVar4 = uVar4 - 1;
            pcVar2 = pcVar2 + 1;
          } while (uVar4 != 0);
        }
        else {
          iVar3 = FUN_01307168(0,param_4,param_3);
          if (iVar3 == 1) goto LAB_0140e010;
        }
        cVar5 = '\x01';
        *param_1 = (int)param_4;
        param_1[1] = param_3;
      }
      else {
        *(char *)param_1 = cVar1;
        cVar5 = '\x02';
      }
    }
    else {
      cVar5 = '\x03';
      if (param_3 >> 0x10 == 0) {
        *param_1 = param_2;
        param_1[1] = param_3;
        cVar5 = '\0';
      }
    }
  }
LAB_0140e010:
  *(char *)(param_1 + 2) = cVar5;
  return;
}


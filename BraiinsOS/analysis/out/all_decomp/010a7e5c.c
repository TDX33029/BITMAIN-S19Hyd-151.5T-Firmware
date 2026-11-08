// FUN_010a7e5c @ 010a7e5c size=260 calls_out=0 calls_in=1
// strings: 

void FUN_010a7e5c(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar5 = (byte *)param_2[1];
  if ((byte *)param_2[2] < pbVar5) {
    bVar2 = false;
    pbVar6 = (byte *)param_2[2];
    do {
      pbVar7 = pbVar6 + 1;
      bVar1 = *pbVar6;
      switch((uint)bVar1) {
      case 9:
      case 0x20:
        goto switchD_010a7eac_caseD_9;
      case 10:
        iVar3 = *param_2;
        param_2[2] = (int)pbVar7;
        *param_2 = (int)pbVar7;
        goto LAB_010a7f60;
      case 0xd:
        param_2[2] = (int)pbVar7;
        if (pbVar7 < pbVar5) {
          bVar1 = pbVar6[1];
          param_2[2] = (int)(pbVar6 + 2);
          if (bVar1 != 10) {
            param_1[1] = 3;
            *param_1 = 1;
            return;
          }
          iVar3 = *param_2;
          *param_2 = (int)(pbVar6 + 2);
LAB_010a7f60:
          iVar4 = (int)pbVar6 - iVar3;
          if (bVar2) {
            iVar3 = 1;
            iVar4 = 0;
          }
          *param_1 = 0;
          *(int *)(param_1 + 4) = iVar3;
          *(int *)(param_1 + 8) = iVar4;
          return;
        }
        goto LAB_010a7f44;
      }
      if ((-1 < (char)bVar1) && (0x5d < bVar1 - 0x21)) {
        param_2[2] = (int)pbVar7;
        param_1[1] = 3;
        *param_1 = 1;
        return;
      }
switchD_010a7eac_caseD_9:
      bVar2 = (bool)((char)bVar1 < '\0' | bVar2);
      pbVar6 = pbVar7;
    } while (pbVar7 != pbVar5);
    param_2[2] = (int)pbVar5;
  }
LAB_010a7f44:
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  return;
}


// FUN_01969c74 @ 01969c74 size=516 calls_out=3 calls_in=2
// strings: 

int FUN_01969c74(undefined4 *param_1,int param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar4 = (undefined4 *)*param_1;
  iVar5 = param_1[3];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = iVar5 + 1;
  iVar9 = *(int *)(param_2 + 4);
  iVar10 = *(int *)(param_2 + 8);
  FUN_01968ab4(&local_30,*puVar4,&DAT_0053340d,1);
  if ((char)local_30 != '\x04') {
LAB_01969e1c:
    iVar5 = FUN_01966f50(local_30,local_2c);
    return iVar5;
  }
  if (iVar10 == 0) {
    param_1[3] = iVar5;
    FUN_01968ab4(&local_30,*puVar4,"]",1);
    if ((char)local_30 != '\x04') goto LAB_01969e1c;
    iVar5 = 0;
  }
  else {
    bVar1 = true;
    iVar5 = iVar9;
    do {
      puVar4 = (undefined4 *)*param_1;
      uVar3 = 2;
      if (bVar1) {
        uVar3 = 1;
      }
      pcVar2 = &DAT_005312e2;
      if (bVar1) {
        pcVar2 = "\n";
      }
      FUN_01968ab4(&local_30,*puVar4,pcVar2,uVar3);
      if ((char)local_30 != '\x04') goto LAB_01969e1c;
      iVar7 = iVar5 + 0x18;
      uVar3 = param_1[1];
      uVar6 = param_1[2];
      iVar8 = param_1[3] + 1;
      while (iVar8 = iVar8 + -1, iVar8 != 0) {
        FUN_01968ab4(&local_30,*puVar4,uVar3,uVar6);
        if ((char)local_30 != '\x04') goto LAB_01969e1c;
      }
      iVar5 = FUN_01969e90(iVar5,param_1);
      if (iVar5 != 0) {
        return iVar5;
      }
      *(undefined1 *)(param_1 + 4) = 1;
      bVar1 = false;
      iVar5 = iVar7;
    } while (iVar7 != iVar9 + iVar10 * 0x18);
    iVar5 = param_1[3];
    puVar4 = (undefined4 *)*param_1;
    param_1[3] = iVar5 + -1;
    FUN_01968ab4(&local_30,*puVar4,"\n",1);
    if ((char)local_30 == '\x04') {
      uVar3 = param_1[1];
      uVar6 = param_1[2];
      do {
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
          local_30 = CONCAT31(local_30._1_3_,4);
          FUN_01968ab4(&local_30,*puVar4,"]",1);
          if ((char)local_30 == '\x04') {
            return 0;
          }
          break;
        }
        FUN_01968ab4(&local_30,*puVar4,uVar3,uVar6);
      } while ((char)local_30 == '\x04');
    }
    iVar5 = FUN_01966f50(local_30,local_2c);
  }
  return iVar5;
}


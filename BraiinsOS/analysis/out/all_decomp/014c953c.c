// FUN_014c953c @ 014c953c size=316 calls_out=1 calls_in=12
// strings: 

undefined4 FUN_014c953c(char *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*param_1 == '\x01') {
    cVar2 = *param_2;
    if (cVar2 == '\x01') {
      if (param_1[1] == '\0') {
        if (param_2[1] != '\0') {
          return 0;
        }
      }
      else if (param_2[1] == '\0') {
        return 0;
      }
LAB_014c961c:
      iVar4 = *(int *)(param_1 + 0x10);
      if (iVar4 == *(int *)(param_2 + 0x10)) {
        pbVar1 = *(byte **)(param_2 + 0xc);
        pbVar3 = *(byte **)(param_1 + 0xc);
        do {
          if (iVar4 == 0) {
            return 1;
          }
          uVar6 = (uint)*pbVar1;
          iVar4 = iVar4 + -1;
          uVar5 = (uint)*pbVar3;
          if (uVar6 - 0x41 < 0x1a) {
            uVar6 = uVar6 | 0x20;
          }
          if (uVar5 - 0x41 < 0x1a) {
            uVar5 = uVar5 | 0x20;
          }
          pbVar1 = pbVar1 + 1;
          pbVar3 = pbVar3 + 1;
        } while (uVar5 == uVar6);
      }
      return 0;
    }
  }
  else {
    if (*param_1 != '\x02') goto LAB_014c95f8;
    cVar2 = *param_2;
    if (cVar2 == '\x02') {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
      if (iVar4 != *(int *)(*(int *)(param_2 + 4) + 8)) {
        return 0;
      }
      pbVar1 = *(byte **)(*(int *)(param_1 + 4) + 4);
      pbVar3 = *(byte **)(*(int *)(param_2 + 4) + 4);
      while (iVar4 != 0) {
        uVar5 = (uint)*pbVar3;
        iVar4 = iVar4 + -1;
        uVar6 = (uint)*pbVar1;
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 | 0x20;
        }
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 | 0x20;
        }
        pbVar1 = pbVar1 + 1;
        pbVar3 = pbVar3 + 1;
        if (uVar6 != uVar5) {
          return 0;
        }
      }
      goto LAB_014c961c;
    }
  }
  if (cVar2 != '\0') {
    return 0;
  }
LAB_014c95f8:
                    /* WARNING: Subroutine does not return */
  FUN_00faa464(&DAT_00419463,0x28,&DAT_0188452c);
}


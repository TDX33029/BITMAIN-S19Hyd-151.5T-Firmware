// FUN_01345170 @ 01345170 size=536 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01345170(uint *param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint local_20;
  byte local_1c;
  
  pcVar4 = "";
  if ((char)param_1[10] == '\0') {
    pcVar4 = "";
  }
  if (param_2 == '\0') {
    uVar6 = param_1[9];
    FUN_01344ce0(&local_20,param_1 + 7,pcVar4);
    uVar2 = (uint)local_1c;
    if (uVar2 == 3) {
LAB_0134529c:
      puVar5 = param_1 + 7;
      *param_1 = uVar6;
      param_1[1] = param_1[9];
      iVar1 = FUN_01344ae8(puVar5,&DAT_005258a1,1);
      if (iVar1 != 0) {
        pcVar4 = "";
        if ((char)param_1[10] == '\0') {
          pcVar4 = "";
        }
        FUN_01344ce0(&local_20,puVar5,pcVar4);
        uVar2 = (uint)local_1c;
        if (uVar2 != 3) goto LAB_01345368;
        param_1[3] = param_1[9];
      }
      iVar1 = FUN_01344ae8(puVar5,"#",1);
      if (iVar1 != 0) {
        pcVar4 = "";
        if ((char)param_1[10] == '\0') {
          pcVar4 = "";
        }
        FUN_01344ce0(&local_20,puVar5,pcVar4);
        uVar2 = (uint)local_1c;
        if (uVar2 != 3) goto LAB_01345368;
      }
      uVar6 = param_1[9];
      uVar2 = 3;
      if (uVar6 < param_1[8]) {
        uVar2 = 1;
      }
      goto LAB_0134536c;
    }
  }
  else if (param_2 == '\x01') {
    uVar6 = param_1[9];
    FUN_01344ce0(&local_20,param_1 + 7,pcVar4);
    uVar2 = (uint)local_1c;
    if (uVar2 == 3) {
      if ((char)local_20 == '\x01') {
        if (param_1[8] <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,param_1[8],&DAT_01ce6adc);
        }
        uVar2 = 1;
        if (*(char *)(param_1[7] + uVar6) != '/') goto LAB_0134536c;
      }
      goto LAB_0134529c;
    }
  }
  else {
    puVar5 = param_1 + 7;
    puVar3 = &DAT_0045124c;
    if ((char)param_1[10] == '\0') {
      puVar3 = &DAT_0045134f;
    }
    FUN_01344ce0(&local_20,puVar5,puVar3);
    uVar2 = (uint)local_1c;
    if (uVar2 == 3) {
      uVar6 = param_1[9];
      if ((uVar6 < param_1[8]) && (uVar2 = 1, *(char *)(*puVar5 + uVar6) == ':')) goto LAB_0134536c;
      FUN_01344ce0(&local_20,puVar5,pcVar4);
      uVar2 = (uint)local_1c;
      if (uVar2 == 3) {
        uVar6 = 0;
        goto LAB_0134529c;
      }
    }
  }
LAB_01345368:
  uVar6 = local_20;
LAB_0134536c:
  return CONCAT44(uVar2,uVar6);
}


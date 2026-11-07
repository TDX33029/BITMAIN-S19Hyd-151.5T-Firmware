// FUN_000183a4 @ 000183a4  size=428  callers=1
// program: cgminer


size_t FUN_000183a4(int param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  char local_84 [104];
  
  memset(local_84,0,100);
  if ((param_1 == 0) || (2 < param_3)) {
    sVar1 = 0x80000002;
  }
  else {
    iVar5 = 0;
    sVar1 = strlen(param_2);
    local_90 = 0;
    local_94 = 0;
    local_8c = 0;
    local_88 = 0;
    if (sVar1 - 1 < 0x10) {
      strncpy((char *)&local_94,param_2,sVar1);
      pcVar4 = DAT_00067310;
      if (param_3 != 0) {
        while( true ) {
          if (pcVar4 == (char *)0x0) {
            sVar1 = FUN_00016a60(param_1,0,0xe,"Invalid command");
            return sVar1;
          }
          iVar2 = strcmp((char *)&local_94,pcVar4);
          if (iVar2 == 0) break;
          iVar5 = iVar5 + 1;
          pcVar4 = (&DAT_00067310)[iVar5 * 4];
        }
        sVar1 = (*(code *)(&DAT_0006731c)[iVar5 * 4])(param_1);
        return sVar1;
      }
      if (DAT_00067370 != (char *)0x0) {
        piVar6 = (int *)&DAT_00067370;
        iVar5 = 0;
        pcVar4 = DAT_00067370;
        do {
          iVar2 = strcmp((char *)&local_94,pcVar4);
          if (iVar2 == 0) {
            sVar1 = (**(code **)(&DAT_00067378 + iVar5 * 0xc))(param_1,&DAT_00067370 + iVar5 * 3);
            if (-1 < (int)sVar1) {
              return sVar1;
            }
            if (sVar1 != 0x80000002) goto LAB_000184d4;
            goto LAB_00018534;
          }
          piVar6 = piVar6 + 3;
          pcVar4 = (char *)*piVar6;
          iVar5 = iVar5 + 1;
        } while (pcVar4 != (char *)0x0);
      }
      snprintf(local_84,100,"not support (%s)",param_2);
    }
    else {
      if (param_3 != 0) {
        return sVar1;
      }
LAB_00018534:
      builtin_strncpy(local_84,"bad param",10);
    }
LAB_000184d4:
    uVar3 = FUN_000491bc(local_84);
    sVar1 = FUN_00049a4c(param_1,"error_message",uVar3);
  }
  return sVar1;
}


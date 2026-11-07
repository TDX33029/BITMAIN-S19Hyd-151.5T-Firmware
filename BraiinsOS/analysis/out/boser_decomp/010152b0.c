// FUN_010152b0 @ 010152b0 size=388 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_010152b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *piStack_34;
  undefined4 uStack_30;
  int *local_2c;
  int *local_28;
  undefined1 local_24;
  
  local_40 = (int *)*param_1;
  piVar3 = local_40 + 0x26;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = *piVar3 + 1;
  do {
    iVar4 = *local_40;
    bVar2 = (bool)hasExclusiveAccess(local_40);
  } while (!bVar2);
  *local_40 = iVar4 + 1;
  if (-1 < iVar4) {
    local_3c = (int *)param_1[1];
    do {
      iVar4 = *local_3c;
      bVar2 = (bool)hasExclusiveAccess(local_3c);
    } while (!bVar2);
    *local_3c = iVar4 + 1;
    if (-1 < iVar4) {
      local_38 = (int *)param_1[2];
      piVar3 = local_38 + 0x26;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = *piVar3 + 1;
      do {
        iVar4 = *local_38;
        bVar2 = (bool)hasExclusiveAccess(local_38);
      } while (!bVar2);
      *local_38 = iVar4 + 1;
      if (-1 < iVar4) {
        piStack_34 = (int *)param_1[3];
        uStack_30 = param_1[4];
        do {
          iVar4 = *piStack_34;
          bVar2 = (bool)hasExclusiveAccess(piStack_34);
        } while (!bVar2);
        *piStack_34 = iVar4 + 1;
        if (-1 < iVar4) {
          piVar3 = piStack_34 + 0x29;
          do {
            bVar2 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar2);
          *piVar3 = *piVar3 + 1;
          local_2c = (int *)param_1[5];
          do {
            iVar4 = *local_2c;
            bVar2 = (bool)hasExclusiveAccess(local_2c);
          } while (!bVar2);
          *local_2c = iVar4 + 1;
          if (-1 < iVar4) {
            local_28 = (int *)param_1[6];
            piVar3 = local_28 + 0x26;
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar2);
            *piVar3 = *piVar3 + 1;
            do {
              iVar4 = *local_28;
              bVar2 = (bool)hasExclusiveAccess(local_28);
            } while (!bVar2);
            *local_28 = iVar4 + 1;
            if (-1 < iVar4) {
              local_24 = *(undefined1 *)(param_1 + 7);
              uVar5 = FUN_011d891c(param_2,param_3,&local_40);
              FUN_00ffdc34(param_1);
              return uVar5;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1015430);
  (*pcVar1)();
}


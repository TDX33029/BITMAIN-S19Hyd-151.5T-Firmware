// FUN_00fff008 @ 00fff008 size=480 calls_out=3 calls_in=1
// strings: 

void FUN_00fff008(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *local_44;
  int *local_40;
  int *piStack_3c;
  int *piStack_38;
  undefined4 uStack_34;
  int *local_30;
  int *local_2c;
  undefined1 local_28;
  
  if (*param_2 == 0) {
    *param_1 = 0;
    FUN_00ffdc34(param_3);
    return;
  }
  if (*param_2 != 1) {
    uVar4 = FUN_011d9290(param_2[1],param_2[2],param_3);
    *param_1 = 2;
    param_1[1] = uVar4;
    param_1[2] = &DAT_01c21f74;
    return;
  }
  local_44 = (int *)*param_3;
  iVar7 = param_2[1];
  iVar6 = param_2[2];
  piVar5 = local_44 + 0x26;
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = *piVar5 + 1;
  do {
    iVar3 = *local_44;
    bVar2 = (bool)hasExclusiveAccess(local_44);
  } while (!bVar2);
  *local_44 = iVar3 + 1;
  if (-1 < iVar3) {
    local_40 = (int *)param_3[1];
    do {
      iVar3 = *local_40;
      bVar2 = (bool)hasExclusiveAccess(local_40);
    } while (!bVar2);
    *local_40 = iVar3 + 1;
    if (-1 < iVar3) {
      piStack_3c = (int *)param_3[2];
      piVar5 = piStack_3c + 0x26;
      do {
        bVar2 = (bool)hasExclusiveAccess(piVar5);
      } while (!bVar2);
      *piVar5 = *piVar5 + 1;
      do {
        iVar3 = *piStack_3c;
        bVar2 = (bool)hasExclusiveAccess(piStack_3c);
      } while (!bVar2);
      *piStack_3c = iVar3 + 1;
      if (-1 < iVar3) {
        piStack_38 = (int *)param_3[3];
        uStack_34 = param_3[4];
        do {
          iVar3 = *piStack_38;
          bVar2 = (bool)hasExclusiveAccess(piStack_38);
        } while (!bVar2);
        *piStack_38 = iVar3 + 1;
        if (-1 < iVar3) {
          piVar5 = piStack_38 + 0x29;
          do {
            bVar2 = (bool)hasExclusiveAccess(piVar5);
          } while (!bVar2);
          *piVar5 = *piVar5 + 1;
          local_30 = (int *)param_3[5];
          do {
            iVar3 = *local_30;
            bVar2 = (bool)hasExclusiveAccess(local_30);
          } while (!bVar2);
          *local_30 = iVar3 + 1;
          if (-1 < iVar3) {
            local_2c = (int *)param_3[6];
            piVar5 = local_2c + 0x26;
            do {
              bVar2 = (bool)hasExclusiveAccess(piVar5);
            } while (!bVar2);
            *piVar5 = *piVar5 + 1;
            do {
              iVar3 = *local_2c;
              bVar2 = (bool)hasExclusiveAccess(local_2c);
            } while (!bVar2);
            *local_2c = iVar3 + 1;
            if (-1 < iVar3) {
              local_28 = *(undefined1 *)(param_3 + 7);
              uVar4 = FUN_011d891c(iVar7,iVar6,&local_44);
              FUN_00ffdc34(param_3);
              *param_1 = 1;
              param_1[1] = uVar4;
              param_1[2] = &DAT_01c1c408;
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xfff1e4);
  (*pcVar1)();
}


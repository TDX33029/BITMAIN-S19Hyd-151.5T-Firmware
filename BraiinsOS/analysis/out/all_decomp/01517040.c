// FUN_01517040 @ 01517040 size=376 calls_out=3 calls_in=1
// strings: 

void FUN_01517040(char *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int local_38;
  uint local_34;
  uint local_30;
  char local_2c;
  char local_2b;
  undefined1 uStack_2a;
  char cStack_29;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  undefined2 uStack_22;
  
  FUN_0152d84c(&local_2c,&DAT_018a7750,param_2);
  if (local_2c != '\x18') {
    param_1[3] = cStack_29;
    *(ushort *)(param_1 + 1) = CONCAT11(uStack_2a,local_2b);
    *(uint *)(param_1 + 4) = CONCAT22(uStack_26,uStack_28);
    *(uint *)(param_1 + 8) = CONCAT22(uStack_22,uStack_24);
    *param_1 = local_2c;
    return;
  }
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  local_34 = CONCAT22(uStack_26,uStack_28);
  if (uVar4 - uVar5 < local_34) {
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0] = '\v';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    return;
  }
  uVar1 = uVar5 + local_34;
  param_2[2] = uVar1;
  if ((CARRY4(uVar5,local_34)) || (uVar4 < uVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar5,uVar1,uVar4,&DAT_018a78f8);
  }
  cVar2 = '\0';
  cVar3 = '\0';
  local_38 = *param_2 + uVar5;
  local_30 = 0;
  if (local_34 != 0) {
    cVar2 = '\0';
    do {
      while( true ) {
        FUN_0152a3fc(&local_2c,&local_38);
        if (local_2c != '\x18') {
          *(uint *)(param_1 + 6) = CONCAT22(uStack_24,uStack_26);
          *(undefined2 *)(param_1 + 10) = uStack_22;
          *(uint *)(param_1 + 2) = CONCAT22(uStack_28,CONCAT11(cStack_29,uStack_2a));
          param_1[1] = local_2b;
          *param_1 = local_2c;
          return;
        }
        if (CONCAT11(cStack_29,uStack_2a) == 4) break;
        if (CONCAT11(cStack_29,uStack_2a) == 5) {
          cVar3 = '\x01';
        }
        if (local_34 <= local_30) goto LAB_01517158;
      }
      cVar2 = '\x01';
    } while (local_30 < local_34);
  }
LAB_01517158:
  param_1[2] = cVar2;
  param_1[1] = cVar3;
  *param_1 = '\x18';
  return;
}


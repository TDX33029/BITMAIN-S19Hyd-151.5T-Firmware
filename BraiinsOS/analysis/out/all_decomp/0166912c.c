// FUN_0166912c @ 0166912c size=240 calls_out=0 calls_in=1
// strings: 

void FUN_0166912c(undefined4 *param_1,int param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  pcVar3 = *(char **)(param_2 + 8);
  uVar4 = 0;
  uVar1 = param_4;
  if (uVar2 < param_4) {
    uVar1 = uVar2;
  }
  if (((((uVar2 == 0) || (*param_3 != *pcVar3)) ||
       ((uVar2 != 1 &&
        ((uVar4 = 1, param_3[1] != pcVar3[1] ||
         ((uVar1 != 2 &&
          ((uVar4 = 2, param_3[2] != pcVar3[2] ||
           ((uVar1 != 3 &&
            ((uVar4 = 3, param_3[3] != pcVar3[3] ||
             ((uVar1 != 4 && (uVar4 = 4, param_3[4] != pcVar3[4])))))))))))))))) && (uVar4 < uVar1))
     || (uVar2 < param_4)) {
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  param_1[2] = param_4;
  *(char **)(param_2 + 8) = pcVar3 + param_4;
  *(uint *)(param_2 + 0xc) = uVar2 - param_4;
  *param_1 = 3;
  param_1[1] = pcVar3;
  return;
}


// FUN_005e8bd8 @ 005e8bd8 size=480 calls_out=7 calls_in=1
// strings: 

void FUN_005e8bd8(uint *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  
  if (param_3 != 0) {
    if (*param_2 == '/' || *param_2 == '\\') goto LAB_005e8bfc;
    if ((param_3 != 1) && (-0x41 < (char)*(short *)(param_2 + 1))) {
      if (param_3 < 4) {
        if (param_3 == 3) {
LAB_005e8c80:
          if (*(short *)(param_2 + 1) == 0x5c3a) {
LAB_005e8bfc:
            if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
              FUN_00600c10();
            }
            uVar1 = thunk_FUN_016d4a50(param_3);
            if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,param_3);
            }
            FUN_016dd1aa(uVar1,param_2,param_3);
            if (*param_1 != 0) {
              thunk_FUN_016d3fb4(param_1[1]);
            }
            *param_1 = param_3;
            param_1[1] = uVar1;
            param_1[2] = param_3;
            return;
          }
        }
      }
      else if (-0x41 < param_2[3]) goto LAB_005e8c80;
    }
  }
  pcVar4 = (char *)param_1[1];
  uVar1 = param_1[2];
  if (uVar1 == 0) {
    uVar1 = 0;
    goto LAB_005e8d40;
  }
  if (*pcVar4 == '\\') {
    cVar5 = '\\';
  }
  else {
    cVar5 = '/';
    if ((uVar1 != 1) && (-0x41 < pcVar4[1])) {
      if (uVar1 < 4) {
        if (uVar1 == 3) {
LAB_005e8cf0:
          iVar2 = thunk_FUN_016dd50a(pcVar4 + 1,&DAT_0033d4bd,2);
          if (iVar2 == 0) {
            cVar5 = '\\';
          }
        }
      }
      else if (-0x41 < pcVar4[3]) goto LAB_005e8cf0;
    }
  }
  if (cVar5 != pcVar4[uVar1 - 1]) {
    uVar3 = uVar1;
    if (*param_1 == uVar1) {
      FUN_005e8dbc(param_1,uVar1,1);
      pcVar4 = (char *)param_1[1];
      uVar3 = param_1[2];
    }
    uVar1 = uVar1 + 1;
    pcVar4[uVar3] = cVar5;
    param_1[2] = uVar1;
  }
LAB_005e8d40:
  if (*param_1 - uVar1 < param_3) {
    FUN_005e8dbc(param_1,uVar1,param_3);
    pcVar4 = (char *)param_1[1];
    uVar1 = param_1[2];
  }
  FUN_016dd1aa(pcVar4 + uVar1,param_2,param_3);
  param_1[2] = uVar1 + param_3;
  return;
}


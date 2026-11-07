// FUN_0001875c @ 0001875c  size=152  callers=1
// program: cgminer


void FUN_0001875c(int param_1,int param_2)

{
  int iVar1;
  ulong local_20;
  undefined4 uStack_1c;
  ulong local_18;
  undefined4 uStack_14;
  
  local_20 = 0;
  uStack_1c = 0;
  local_18 = 0;
  uStack_14 = 0;
  if (param_1 != 0) {
    sscanf(&DAT_00076444,"%lf",&local_20);
    sscanf(&DAT_00076464,"%lf",&local_18);
    if ((double)CONCAT44(uStack_1c,local_20) < (double)CONCAT44(uStack_14,local_18) * 0.95) {
      iVar1 = -1;
    }
    else {
      iVar1 = (int)((uint)(byte)DAT_00077d30 << 0x1c) >> 0x1f;
    }
    if (param_2 != 0) {
      FUN_00018654(param_1,param_2,iVar1);
      return;
    }
  }
  return;
}


// FUN_00045008 @ 00045008  size=648  callers=1
// program: cgminer


undefined4 FUN_00045008(uint param_1,int param_2,code *param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_3c;
  char acStack_38 [20];
  
  local_3c = 0;
  iVar1 = (*param_3)(&DAT_00051f68,1,param_4);
  if (iVar1 == 0) {
    uVar6 = param_1 + param_2;
    uVar5 = param_1;
    while (uVar5 < uVar6) {
      uVar2 = FUN_000489e8(uVar5,uVar6 - uVar5,&local_3c);
      if (uVar2 == 0) {
        return 0xffffffff;
      }
      if ((((int)local_3c < 0x20 || (local_3c == 0x22 || local_3c == 0x5c)) ||
          (((uint)(local_3c == 0x2f) & param_5 >> 10) != 0)) ||
         (((uint)(0x7f < (int)local_3c) & param_5 >> 6) != 0)) {
        if ((param_1 != uVar5) && (iVar1 = (*param_3)(param_1,uVar5 - param_1,param_4), iVar1 != 0))
        {
          return 0xffffffff;
        }
        if (uVar5 == uVar2) goto LAB_00045274;
        if (local_3c == 0xc) {
          uVar4 = 2;
          pcVar3 = "\\f";
        }
        else if ((int)local_3c < 0xd) {
          if (local_3c == 9) {
            uVar4 = 2;
            pcVar3 = "\\t";
          }
          else if (local_3c == 10) {
            uVar4 = 2;
            pcVar3 = "\\n";
          }
          else if (local_3c == 8) {
            uVar4 = 2;
            pcVar3 = "\\b";
          }
          else {
LAB_0004516c:
            if ((int)local_3c < 0x10000) goto LAB_00045174;
LAB_000451ac:
            uVar7 = local_3c - 0x10000;
            uVar5 = local_3c & 0x3ff;
            local_3c = uVar7;
            snprintf(acStack_38,0xd,"\\u%04X\\u%04X",(uVar7 & 0xfffff) >> 10 | 0xd800,uVar5 | 0xdc00
                    );
            pcVar3 = acStack_38;
            uVar4 = 0xc;
          }
        }
        else if (local_3c == 0x22) {
          uVar4 = 2;
          pcVar3 = "\\\"";
        }
        else if ((int)local_3c < 0x23) {
          if (local_3c == 0xd) {
            uVar4 = 2;
            pcVar3 = "\\r";
          }
          else {
            if (0xffff < (int)local_3c) goto LAB_000451ac;
LAB_00045174:
            snprintf(acStack_38,0xd,"\\u%04X",local_3c);
            pcVar3 = acStack_38;
            uVar4 = 6;
          }
        }
        else if (local_3c == 0x2f) {
          uVar4 = 2;
          pcVar3 = "\\/";
        }
        else {
          if (local_3c != 0x5c) goto LAB_0004516c;
          uVar4 = 2;
          pcVar3 = "\\\\";
        }
        iVar1 = (*param_3)(pcVar3,uVar4,param_4);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
        param_1 = uVar2;
      }
      uVar5 = uVar2;
    }
    if ((param_1 == uVar5) || (iVar1 = (*param_3)(param_1,uVar5 - param_1,param_4), iVar1 == 0)) {
LAB_00045274:
      uVar4 = (*param_3)(&DAT_00051f68,1,param_4);
      return uVar4;
    }
  }
  return 0xffffffff;
}


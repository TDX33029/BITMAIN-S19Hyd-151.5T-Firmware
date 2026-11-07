// FUN_0141240c @ 0141240c size=156 calls_out=2 calls_in=2
// strings: 

void FUN_0141240c(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char local_74;
  char local_73;
  char local_72;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  cVar1 = *param_2;
  cVar2 = param_2[1];
  cVar3 = param_2[2];
  if (cVar1 == '\x04') {
    *(char *)((int)param_1 + 2) = cVar3;
    *(char *)((int)param_1 + 1) = cVar2;
    *(undefined1 *)param_1 = 3;
  }
  else {
    FUN_01bed4e2((uint)&local_74 | 3,param_2 + 3,0x29);
    local_74 = cVar1;
    local_73 = cVar2;
    local_72 = cVar3;
    FUN_01414ce8(&local_48,&local_74);
    if ((char)local_48 == '\x03') {
      *(undefined1 *)((int)param_1 + 2) = local_48._1_1_;
      *(undefined2 *)param_1 = 0x303;
    }
    else {
      *param_1 = local_48;
      param_1[1] = uStack_44;
      param_1[2] = uStack_40;
      param_1[3] = uStack_3c;
      param_1[4] = uStack_38;
      param_1[5] = local_34;
      param_1[6] = uStack_30;
      param_1[7] = uStack_2c;
      param_1[8] = uStack_28;
      param_1[9] = uStack_24;
      param_1[10] = uStack_20;
    }
  }
  return;
}


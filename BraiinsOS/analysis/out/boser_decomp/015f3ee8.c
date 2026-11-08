// FUN_015f3ee8 @ 015f3ee8 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_015f3ee8(char *param_1,undefined4 param_2)

{
  char *pcVar1;
  char **ppcVar2;
  code *pcVar3;
  char *local_10;
  char *local_c;
  
  if (*param_1 == '\x02') {
    local_10 = param_1 + 1;
    pcVar3 = FUN_015f3f64;
    pcVar1 = "V4";
    ppcVar2 = &local_10;
  }
  else {
    pcVar1 = "V6";
    pcVar3 = FUN_015f403c;
    ppcVar2 = &local_c;
    local_c = param_1;
  }
  FUN_013032f4(param_2,pcVar1,2,ppcVar2,pcVar3);
  return;
}


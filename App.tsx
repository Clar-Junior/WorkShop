import React from 'react';
import {View, StyleSheet, TextInput, Text, TouchableOpacity} from 'react-native';


export default function App() {
  return(
    <View style={styled.container}>

      <Text key={1} style={{
        color: '#FCFDFE',
        fontSize: 24,
        lineHeight: 28.13,
        fontWeight:'700',
        }}>
        Nome do Evento
      </Text>

      <Text key={2} style={{
          color: 'darkgray',
          fontSize: 16,
          lineHeight: 18.75,
          fontWeight: '400',
          }}>
          Sábado, 22 de abril de 2023.
      </Text>
    
      

      <View style={styled.containerInput}>
        <TextInput
          placeholder='Nome do participante'
          placeholderTextColor={'#6B6B6B'}
          style={styled.input}
        ></TextInput>

        <TouchableOpacity style={styled.buttonAdd}>
            <Text style={styled.labelButton}>+</Text>
        </TouchableOpacity>
      </View>
      

    </View>
  );
};

const styled = StyleSheet.create({
  container:
  {
    backgroundColor: '#131016',
    flex: 1,
    paddingHorizontal: 24,
    paddingVertical: 25
  },

  title:{
    color: '#FDFCFE',
    fontSize:24,
    lineWeight:28.13,
    fontWeight:'700'
  },

  subtitle:{
    color:'#6B6B6B',
    fontSize:18.75,
    lineHeight:16,
    fontWeight:'400'
  },

  input:{
    flex:1,
    height:56,
    borderRadius:4,
    backgroundColor:'#1F1E25',
    color:'#FDFCFE',
    alignItems:'center',
    paddingHorizontal:16,
    fontSize:14,
    lineHeight:28,
    fontWeight:'400'

  },

  containerInput:{
    flexDirection: 'row',
    alignItems:'center',
    marginTop:34,
    gap:7
  },

  buttonAdd:{
    alignItems:'center',
    justifyContent:'center',
    width:56,
    height:56,
    borderRadius:4,
    backgroundColor:'#31CF67'
  },

  labelButton:{
    color:'#fff',
    fontSize:24,
    lineHeight:24,
    fontWeight:'400',
  },

})